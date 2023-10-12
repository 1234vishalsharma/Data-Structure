#include<iostream>
using namespace std;
int calcsum(int arr[],int size){
    // base case
    if(size==0){
        return 0;
    }    
    if(size==1){
        return arr[0];
    }
    
    // recurrence relation
    int remainpart=calcsum(arr+1,size-1);
    int sum=arr[0]+remainpart;

    
}
int main()
{
    int arr[5]={3,2,5,6,1};
    int size=5;
    int ans=calcsum(arr,size);
    cout<<ans<<endl;
    return 0;
}