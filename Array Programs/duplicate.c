#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,1,2,4,2,1,3,3}; 
    int n=10;   
    printf("Array is\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // Remove dupplicate element logic
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("\nAfter removal of elements Array is\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}