#include<iostream>
using namespace std;
void printarr(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
}
int binarysearch(int *arr,int start,int end,int ele){
    cout<<"Array is"<<endl;
    printarr(arr,start,end);
    cout<<endl;
    // base case
    if(start>end){
        return 0;
    }
    // processing part
    int mid=(start+end)/2;
    cout<<"Mid element is "<<arr[mid]<<endl;
    if(arr[mid]==ele){
        return ele;
    }
    else if(arr[mid]<ele){
        // Right search
        binarysearch(arr,mid+1,end,ele);
    }
    else{
        //left search
        binarysearch(arr,start,mid-1,ele);  
    }

}
int main()
{
    int arr[11]={11,34,35,67,70,75,78,89,99,100,167},size=11;
    int element;
    int start=0,end=size-1;
    cout<<"Enter the element you have to find in the array"<<endl;
    cin>>element;
    cout<<endl;
    int res=binarysearch(arr,start,end,element);
    cout<<endl;
    if(res){
        cout<<res<<" Found in array"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}