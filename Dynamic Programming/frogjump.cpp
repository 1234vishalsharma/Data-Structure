#include<iostream>
#include<vector>
using namespace std;
// using recursion

int frog_energy_recursion(vector<int>& arr,int n){
    if(n==0){
        return 0;
    }
    int left=frog_energy_recursion(arr,n-1) + abs(arr[n]-arr[n-1]);
    int right=INT32_MAX;
    if(n>1) frog_energy_recursion(arr,n-2) + abs(arr[n]-arr[n-2]);

    return min(left,right);
}
// using memorization
int frog_energy_memoization(vector<int> &arr,int n,vector<int> &dp){
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int left=frog_energy_memoization(arr,n-1,dp)+abs(arr[n-1]-arr[n]);
    int right=INT32_MAX;

    if(n>1) right=frog_energy_memoization(arr,n-2,dp)+abs(arr[n-2]-arr[n]);

    return dp[n]=min(left,right);

}



int main()
{
    int n;
    cout<<"Enter the size of the array ";
    cout<<endl;
    cin>>n;
    vector<int> arr;
  
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        int data;
        cout<<"Enter the data of index "<<i<<" ";
        cin>>data;
        arr.push_back(data);
    }    

    cout<<"The array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }    

    vector<int> dp(n+1,-1);
    cout<<endl;
    cout<<"Minimum energy required to jump a frog :"<<frog_energy_recursion(arr,n);

    return 0;
}

// inp 1
// 4
// 10 20 30 10
// output  20

// inp 2
// 3
// 10 50 10
// output  0