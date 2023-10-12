#include<stdio.h>
int array(int arr[],int n){

    printf("Enter the array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int binarysearch(int arr[],int n){
    int mid,start=0,end=n-1,element;
    printf("\nEnter the element you want to search in the given array\n");
    scanf("%d",&element);
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]>element){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main()
{
    int size;
    int arr[100],index;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    array(arr,size);   
    index=binarysearch(arr,size); 
    if(index!=-1){
        printf("Element found , Element is at index %d",index);
    }
    else{
        printf("Element Not found\n");
    }
    return 0;
}