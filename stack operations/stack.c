#include<stdio.h>
int stack(int arr[],int n,int element){    
    int top,i;
    top=0;
   // your code here
   for(i=0;i<n;i++){
      if(top==0){
          arr[top]=element;
          top++;
      }
    } 
}
int main()
{    
    int i,n=10,arr[10];
    stack(arr,n,10);
    stack(arr,n,14);
    stack(arr,n,16);
    stack(arr,n,18);
    stack(arr,n,143);
    stack(arr,n,105);
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}