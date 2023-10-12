#include<iostream>
using namespace std;

int main()
{
    int arr[5]={5,12,32,10,56};         // create array   programmer defiined

    // Traversing part
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

// 512321056
// 5 
// 12
// 32 
// 10 
// 56





#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array "<<endl;
    cin>>size;

    int *arr=new int[size];

    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<endl;

    // traversiing part

    cout<<"Here is the elements of array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

