// heapify algo converts a binary tree into max heap tree or min heap tree 
// Performing heapify algo to convert a binary tree into max heap tree 
#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i){
    int parent=i;
    int left=2*i;
    int right=(2*i)+1;
    if(left<n && arr[parent]<arr[left]){
        parent=left;
    }
    if(right<n && arr[parent]<arr[right]){
        parent=right;
    }
    if(parent!=i){
        swap(arr[parent],arr[i]);
        heapify(arr,n,parent);
    }
}
int main()
{
    int array[5]={54,122,55,52,50};
    int n=5;
    for(int i=n/2;i>=0;i--){
        heapify(array,n,i);
    }
    cout<<"Printing array after heapify algo processing\n";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}