#include<stdio.h>
void array(int arr[],int size){
    printf("Enter the elements of the array:\n");
    for(int i=1;i<=size;i++){
        scanf("%d",&arr[i]);
    }
}
void display(int arr[],int size){
    int i;
    for(i=1;i<=size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void deletion(int arr[],int size,int index){
   for(int i=index;i<=size;i++){
        arr[i]=arr[i+1];
    }
}
int main()
{
    int a[10],size,index;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    array(a,size);
    display(a,size);
    printf("Enter the index you want to remove from array:\n");
    scanf("%d",&index);
    deletion(a,size,index);
    size-=1;
    display(a,size);
    return 0;
}