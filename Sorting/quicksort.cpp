#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivit=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivit){
            count++;
        }
    }
    int pvtindx=s+count;
    swap(arr[pvtindx],arr[s]);

    int i=s,j=e;
    while(i<pvtindx && j>pvtindx){
        while(arr[i]<pivit){
            i++;
        }
        while(arr[j]>pivit){
            j--;
        }
        if(i<pvtindx && j>pvtindx){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pvtindx;
}
void quicksort(int arr[],int st,int end){
    // base case
    if(st>=end){
        return;
    }
    int p=partition(arr,st,end);

    // recursion call 
    // left sort
    quicksort(arr,st,p-1);
    // right sort
    quicksort(arr,p+1,end);
}
int main()
{
    int arr[5]={1,4,2,6,9};
    int size=5,s=0,e=size-1;
    quicksort(arr,s,e);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}