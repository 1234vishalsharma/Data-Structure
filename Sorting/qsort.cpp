#include<iostream>
#include "print_array.h"
using namespace std;

int partition(int arr[],int st,int end){
    int pivit=arr[st];
    int count=0;

    for(int i=st+1;i<=end;i++){
        if(arr[i]<=pivit){
            count++;
        }
    }
    int pivitind=st+count;
    swap(arr[pivitind],arr[st]);

    int i=st,j=end;
    while(i<pivitind && j>pivitind){
        while(arr[i]<pivit){
            i++;
        }
        while(arr[j]>pivit){
            j++;
        }

        if(i<pivitind && j>pivitind){
                swap(arr[i],arr[j]);
                i++;
                j--;
        }
    }
    return pivitind;
}

void q_sort(int arr[],int st,int ed){
    // base case
    if(st>=ed){
        return;
    }
    
    // progressive part 
    int part=partition(arr,st,ed);

    // recursive call for left side 
    q_sort(arr,st,part-1);

    // recursive call for right side 
    q_sort(arr,part+1,ed);

}
int main()
{
    int arr[5]={1,4,2,6,9};
    int size=5;

    print_array(arr,0,size-1);

    q_sort(arr,0,size-1);

    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}