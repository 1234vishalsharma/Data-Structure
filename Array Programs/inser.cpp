#include<iostream>
using namespace std;

int main()
{
    int *arr;
    int n;
    int pos;
    int element;
    
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    arr=new int[n];

    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the position: "<<endl;
    cin>>pos;

    cout<<"Enter the value which you want to insert at "<<pos<<": "<<endl;
    cin>>element;
    
    n=n+1;   // size +1

    for(int i=n-2;i>=pos;i--){
        arr[i+1]=arr[i];
    }

    arr[pos]=element;
    cout<<endl;
    
        
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}