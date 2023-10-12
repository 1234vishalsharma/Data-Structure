#include<stdio.h>
#include<stdlib.h>
struct array{
    int *arr;
    int size;
};

void traverse(int arr[],int n){
    if(n<=0){
        return;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int insert(int arr[],int n,int data, int pos){
    if(pos>n && pos<0){
        return 0; 
    }
    else{
        for(int i=n-1;i>=pos;i--){
            arr[i+1]=arr[i];
        }
        arr[pos]=data;
        n++;
    }
    return n;
}

int main()
{
    struct array ar;
    printf("\n");
    printf("Enter the size if the array \n");
    scanf("%d",&ar.size);  
    
    printf("\n");

    ar.arr = malloc( ar.size * sizeof(int) );
    
    printf("Enter the elements of the array \n");
    printf("\n");
    for(int i=0;i<ar.size;i++){
        scanf("%d",&ar.arr[i]);
    }
    printf("\n");
    traverse(ar.arr,ar.size);

    int data,pos;
    printf("Enter the value you want to insert in the array\n");
    scanf("%d",&data);
    printf("Enter the position where you want to insert the %d in array",data);
    scanf("%d",&pos);
    
    int size=insert(ar.arr,ar.size,data,pos);

    traverse(ar.arr,size);
    return 0;
}
