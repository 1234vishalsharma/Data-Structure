//     Traversal  ===   visiting all elements one by one in an array. 
#include<iostream>                                         // Pre processor directives
using namespace std;
void display(int arr[],int n){                            // Display function
    for(int i=0;i<n;i++){                                 // Loop starting from 0 and less than n
        printf("%d ",arr[i]);                            // Printing the array 
    }
    printf("\n");
}
int reverseArray(int arr[] , int m,int n)
{
	// Write your code here.
    for(int i=0;i<=m;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=n-1;i>m;i--){
        cout<<arr[i]<<" ";
    }
}

int main()                                                // Main function starting 
{
    int arr[10]={1,2,3,4,5,6};                               // Array decleration
    display(arr,6);                                       // Calling dispaly function
    reverseArray(arr,3,6);
    return 0;
}