#include<stdio.h>
void array(int arr[],int size){
    int i;
    
    printf("Enter the elements of array:\n");
    for(i=0;i<=size-1;i++){
        scanf("%d",&arr[i]);
    }
}
void display(int arr[],int size){
    printf("Array formed is:\n");
    for(int i=0;i<=size-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insertion(int arr[],int size,int element){
    int pos,i;
    printf("Enter the position (index) at which you want to insert the element:\n");
    scanf("%d",&pos);
    printf("Enter the element you want to insert at position %d :\n",pos);
    scanf("%d",&element);
    if(pos>size-1){
        printf("Cannot insert the element at the position you mentioned:");
    }
    else{
        for(i=size-1;i>=pos;i--){
            arr[i+1]=arr[i];
        }
        arr[pos]=element;
        
    }
}
int main()
{
    int a[10],size,element;
    printf("Enter the szie of array:\n");
    scanf("%d",&size);
    array(a,size);
    display(a,size);
    insertion(a,size,element);
    size+=1;
    display(a,size);
    return 0;
}