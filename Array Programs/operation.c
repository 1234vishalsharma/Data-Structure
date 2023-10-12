#include<stdio.h>
int size;
void insert(int arr[],int size){
    int element,index;
    printf("\nEnter the element you want to insert in the array\n");
    scanf("%d",&element);
    printf("Enter the index number also\n");
    scanf("%d",&index);
    for(int i=size;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    size++;
}
void display(int arr[],int size){
    printf("\nElement of the arrayis\n");
    for(int i=0;i<size;i++){   
        printf("%d ",arr[i]);    
    }
}
int main()
{
    int arr[10];
    
    printf("Enter the szie of array\n");
    scanf("%d",&size);
    printf("Enter the element of array\n");
    for(int i=0;i<size;i++){   
        scanf("%d",&arr[i]);    
    }
    display(arr,size);
    insert(arr,size);
    display(arr,size);
    return 0;
}