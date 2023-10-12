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
int minDist(int a[], int n, int x, int y) {
        // code here
        int i,j,index1=-1,index2=-1,temp;
        for(i=0;i<n;i++){
            if(x==a[i]){
                index1=i;        
            }
            if(y==a[i]){
                index2=i;       
            }
        }
        if(index1!=-1 && index2!=-1 && index1>index2){
            return index1-index2;
        }
        else if(index1!=-1 && index2!=-1 && index2>index1){
            return index2-index1;
        }
        else{
            return -1;
        }
    }
int main()
{
    int a[100],size,element,result;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    array(a,size);
    printf("Array is :\n");
    display(a,size);
    printf("The minimum distance between the two numbers is: ");
    printf("%d",result=minDist(a,size,34,56));
    return 0;
}