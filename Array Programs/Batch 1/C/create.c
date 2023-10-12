#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    // traversing part
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);     
    }    
    return 0;
}




// user defined array program

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);

    int *arr=malloc(size*sizeof(int));

    printf("Enter the elements of array\n");

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }    

    // traversing part

    printf("\nHere are the elements of array\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}