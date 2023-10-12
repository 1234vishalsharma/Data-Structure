#include<stdio.h>
int main()
{
    int left[5],right[5],i,n=4,arr[]={'7','4','0','9'};
    left[0]=arr[0];
        for(i=0;i<n;i++){
            if(arr[i+1]<left[i]){
                left[i+1]=arr[i];
            }
            else{
                left[i+1]=arr[i+1];
            }
        }
        right[n-1]=arr[n-1];
        for(i=n-2;i>0;i--){
            if(arr[i]>right[i+1]){
                right[i]=arr[i+1];
            }
            else{
                right[i]=arr[i];
            }
        }
        for(i=0;i<n;i++){
            printf("%d ",left[i]);
        }
        printf("\n");
        for(i=0;i<n;i++){
            printf("%d ",right[i]);            
        }
    
    return 0;
}