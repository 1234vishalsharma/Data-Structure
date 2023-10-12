#include<iostream>
#include<unordered_map>
using namespace std;
int subarray_given_sum(int arr[],int n,int givensum){
    unordered_map<int,int> mp;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(mp.find(abs(givensum-sum))!=mp.end()){
            return 1;
        }
        mp[sum]++;
    }
    return 0;
}
int main()
{
    int arr[10];
    int n;
    int givensum;
    cout<<"Enter the Size of the array (size<=10)"<<endl;
    cin>>n;
    cout<<"Now enter the elements of the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter the given sum value "<<endl;
    cin>>givensum;
    cout<<endl;
    cout<<subarray_given_sum(arr,n,givensum);
    cout<<endl;
    return 0;
}