#include <stdio.h>
int helper(int arr[],int n, int mid){
        int lsum=0,rsum=0;
        for(int i=0;i<mid;i++){
            lsum+=arr[i];
        }
        for(int j=mid+1;j<n;j++){
            rsum+=arr[j];
        }
        if(lsum==rsum){
            printf("%d ", mid+1);
        }
        else if(lsum<rsum){
            mid++;
            helper(arr,n,mid);
        }
        else{
            mid--;
            helper(arr,n,mid);
        }
    }
    
int main()
{
    int arr[42] = {4, 42, 27, 16, 28, 3, 4, 5, 9, 3, 31, 5, 5, 29, 10, 18, 35, 35, 33, 19, 41, 23, 8, 32, 9, 5, 8, 18, 35, 13, 6, 7, 6, 10, 11, 13, 37, 2, 25, 7, 28, 43};
    int n=42,mid=n/2,index;
    index=helper(arr,n,mid);
    printf("%d",index);
    return 0;
}