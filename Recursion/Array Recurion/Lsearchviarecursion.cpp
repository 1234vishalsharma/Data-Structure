#include<iostream>
using namespace std;
void printarr(int arr[],int s){
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
}
int linearsearch(int *arr,int size,int ele){
    cout<<"Checking current element matched with the searched element "<<endl;
    cout<<"Current element is "<<arr[0]<<endl;
    printarr(arr,size);
    cout<<endl;
    // base case
    if(size==0){
        return 0;
    }
    // processing part
    if(arr[0]==ele){
        return ele;
    }
    
    int rem_part=linearsearch(arr+1,size-1,ele);
    return rem_part;
    
}
int main()
{
    int arr[5]={1,2,3,4,5},size=5;
    int element;
    cout<<endl;
    cout<<"Enter the element you want ot search in the array ";
    cin>>element; 
    cout<<endl;
    cout<<"Searching for "<<element<<" in array"<<endl;
    int result=linearsearch(arr,size,element);
    cout<<endl;
    if(result){
        cout<<result<<" Found in array "<<endl;
    }
    else{
        cout<<"Not found";
    }
    return 0;
}