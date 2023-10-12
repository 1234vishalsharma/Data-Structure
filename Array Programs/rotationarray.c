#include<stdio.h>
int create(int arr[],int n){
    int i;
    printf("Please enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
int display(int arr[],int size){
    printf("Array is \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
int findKRotation(int arr[], int n) {
	    // code here
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>arr[i+1]){
	            count+=1;
	        }
	    }
	    if(count!=0){
	        printf("\nNumber of rotation is : %d",count);
	    }
	    else{
	        return 0;
        }
	}
int main()
{
    int arr[10];
    int size;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    create(arr,size);
    display(arr,size);
    findKRotation(arr,size);
    return 0;
}