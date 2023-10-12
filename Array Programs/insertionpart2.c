#include<stdio.h>
int display(int arr[],int n){
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

int insertion(int arr[] , int size , int element , int capacity ,int index){
    if(size>=capacity){
        return -1;
    }
    
        for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int main()
{
    int arr[10];
    int capacity=8,index=3,element;
    int size=5;
    display(arr,size);
    printf("\nEnter the element you want to insert in between the array: ");
    scanf("%d",&element);
    insertion(arr,size,element,capacity,index);
    size+=1;
    printf("\n");
    display(arr,size);
    return 0;
}