// applying heapify algo to convert a binary tree into min heap tree 
#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i){
    int min=i;
    int left=2*i;
    int right=(2*i)+1;
    if(left<n && arr[min]>arr[left]){
        min=left;
    }
    if(right<n && arr[min]>arr[right]){
        min=right;
    }
    if(min!=i){
        swap(arr[min],arr[i]);
        heapify(arr,n,min);
    }
}
int main()
{
    int arr[5]={54,53,55,52,50};
    int n=5;
    cout<<"Printing array before applying heapify algorithm \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=n/2;i>=0;i--){
        heapify(arr,n,i);
    }
    cout<<"Printing array after applying heapify algorithm \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}