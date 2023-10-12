#include<iostream>
#include<unordered_map>
#include "print_array.h"
using namespace std;

bool subarray_with_0_sum(int arr[],int size){
    int sum;
    unordered_map<int, int> mp;
    if(size<=0){
        return false;
    }    
    if(size==1){
        if(arr[0]!=0){
            return false;
        }
        else{
            cout<<"There is a single value in the array whose sum is zero 0"<<endl;
            return true;
        }
    }
    else{
        for(int i=0;i<size;i++){
            sum+=arr[i];
            if(sum==0 || mp.find(sum)!=mp.end()){
                return true;
            }
            mp[sum]++;
        }
    }
    return false;
}
int main()
{
    int arr[10];
    int size;
    cout<<"Enter the size of the array "<<endl;
    cin>>size;
    cout<<"Now Enter the elements of the array "<<endl;
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Initially the array is "<<endl;
    print_array(arr,size);

    cout<<endl;
    // this function return a boolean value if there is a subarray present in the given array whose sum value is zero
    if(subarray_with_0_sum(arr,size)){
        cout<<"Subarray present"<<endl;
    }
    else{
        cout<<"Subarray is not present "<<endl;
    }
    return 0;
}