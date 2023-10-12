#include<stdio.h>
int main()
{
    int arr[]={1,2,3,13,12,34,54};
    int size=sizeof(arr)/sizeof(int);
    int element=34,i;
    for(i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    for(i=0;i<size;i++){
        if(arr[i]==element){
            printf("Element Found !");
            printf("The index of element is %d",i);
        }
    }
    return 0;
}