// In this program we have to a array and display it from a display function 
#include<stdio.h>
int display(int arr[],int size){
    int i;
    printf("Please enter the array elements: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

int main()
{
    int arr[10];
    int size;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    display(arr,size);
    return 0;
}