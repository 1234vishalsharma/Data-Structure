#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i){
    int parent=i;
    int left=2*i;
    int right=(2*i)+1;
    if(left<=n && arr[parent]<arr[left]){
        parent=left;
    }
    if(right<=n && arr[parent]<arr[right]){
        parent=right;
    }
    if(parent!=i){
        swap(arr[parent],arr[i]);
        heapify(arr,n,parent);
    }
}
void heapsort(int arr[],int n){
    int size=n;
    while(size>1){
        swap(arr[size],arr[1]);
        size--;
        heapify(arr,size,1);
    }
}

int main()
{
    int array[6]={-1,10,23,37,2,4};
    int n=5;
    heapsort(array,n);
    for(int i=1;i<=n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}