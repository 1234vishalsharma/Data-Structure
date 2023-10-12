#include<stdio.h>
void display(int a[],int size){
    for(int i=0;i<size;i++){
        printf("%d  ",a[i]);
    }
}
int deletion(int a[],int element,int size,int i){
    printf("\nEnter the element you want to remove from array\n");
    scanf("%d",&element);
    for(i=0;i<size;i++){
        if(element==a[i]){
           return i;
        }
       
    }
}
int main()
{
    int a[]={1,2,3,4,5};
    int element,i;
    int size=sizeof(a)/sizeof(int);
    display(a,size);    
    deletion(a,element,size,i);
    printf("The element was found at index:%d",i);

    return 0;
}