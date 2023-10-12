#include<iostream>
using namespace std;
void traverse(int arr[],int n){
    if(n<0 && n==0){
        return;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int *arr;
    int size;
    // taking size from user
    cout<<"Enter the size of the array "<<endl;
    cin>>size;


    // creating the array of the given size
    arr=new int[size];
    
    // taking array elements from user
    cout<<"Enter the elements fo the array "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    // calling te traversing function 
    cout<<endl;
    traverse(arr,size);
    cout<<endl;
    return 0;
}