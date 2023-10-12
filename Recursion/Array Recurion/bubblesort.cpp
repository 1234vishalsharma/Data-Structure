#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void dosort(int arr[],int n){

    printarray(arr,n);
    cout<<endl;
    // base case
    if(n==0||n==1){
        return ;
    }
    // processing part
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    // recursion call 
    dosort(arr,n-1);
}
int main()
{
    int arr[6]={1,9,3,8,4,7},size=6;
    cout<<endl;
    cout<<"Given array is ";
    printarray(arr,size);
    cout<<endl<<endl;
    cout<<"Processing part is "<<endl<<endl;
    dosort(arr,size);
    cout<<endl;
    cout<<"Sorted array is ";
    printarray(arr,size);
    return 0;
}