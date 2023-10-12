#include<stdio.h>
int crtarray(int arr[],int n){
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array is \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int getheightstsum(int arr[],int n){
    int currsum=0;
    int maxsum=0;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
        if(currsum>maxsum){
            maxsum=currsum;
        }
    }
    printf("Max sum is ",maxsum);
}
int main()
{
    int array[10],size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    crtarray(array,size);
    getheightstsum(array,size);
    return 0;
}