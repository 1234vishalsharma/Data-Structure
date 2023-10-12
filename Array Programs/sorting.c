#include<stdio.h>
int main()
{
	int i,j,temp,arr[50],size;
	printf("Size of array\n");
	scanf("%d",&size);
	printf("Array elements\n");
	for(i=0;i<size;i++){
		scanf("%d ",&arr[i]);
	}	
	printf("Array is \n");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}	
	printf("sorted array is"); 
	for(i=0;i<size;i++){
		for(j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n%d",arr[size-1]);
	printf("\n%d",arr[size-2]);
	return 0;
}