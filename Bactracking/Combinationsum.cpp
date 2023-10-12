#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int backtracksum(int arr[],int n,int k){
    int currsum=0;
    vector<int> temp;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum==k){
            temp.push_back(arr[i]);
        }
    }
}
int main()
{
    int arr[4]={2,3,6,7};
    int k=7;
    int n=4;
    display(arr,n);
    return 0;
}