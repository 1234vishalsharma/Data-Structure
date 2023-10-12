#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,7,5};
    int n=5,sum=0,s=12;
   int left=0,right=0;
      int currsum=0;
      if(n==1 && s==arr[0]){
        return 1;
      }
      for(int i=0;i<n;i++){
          currsum+=arr[right];
          if(currsum==s){
            printf("%d %d",left,right);
          }
          else if(currsum<s){
              right++;
          }
          else if(currsum>s){
              currsum-=arr[left];
              left++;
          }
      }
    return 0;
}

// 10 15
// 1 2 3 4 5 6 7 8 9 10