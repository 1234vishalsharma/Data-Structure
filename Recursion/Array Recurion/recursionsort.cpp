#include<iostream>
using namespace std;
bool checksort(int arr[],int size){
    // base case
    if(size==0||size==1){
        return true;
    }
    if(arr[size-1]<arr[size-2]){
        return false;
    }
    else{
        checksort(arr,size-1);
    }
}
int main()
{
    int arr[5]={3,4,5,6,17};
    int size=5;
    bool ans=checksort(arr,size);
    if(ans){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}