#include<iostream>
using namespace std;
void return_subarray_index(int arr[],int n,int s){
    int left=0;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum==s){
            cout<<left+1<<" "<<i;
            return ;
        }
        sum+=arr[i];
        while(sum>s && left<i){
            sum-=arr[left];
            left++;
        }
    }
    return ;
}
int main()
{
    int arr[10];
    int size;
    z:
    cout<<"Enter the size of the array (size<10)"<< endl;
    cin>>size;
    if(size>10){
        cout<<"Size must be less than 10"<<endl;
        goto z;
    }
    cout<<endl<<"Now enter the elements of the array "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int sum;
    cout<<"Enter the sum value "<<endl; cin>>sum; cout<<endl;
    return_subarray_index(arr,size,sum);
    return 0;
}