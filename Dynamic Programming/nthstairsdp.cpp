#include<iostream>
#include<vector>
using namespace std;

// using dp 
int solve(int n,vector<int> dp){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=solve(n-1,dp)+solve(n-2,dp);
    return dp[n];
}

// using recursion
int nways(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }

    return nways(n-1)+nways(n-2);
}

int main()
{
    int nStairs;
    cout<<"Enter the number of Stairs "<<endl;
    cin>>nStairs;
    vector<int> dp(nStairs+1);
    for(int i=0;i<=nStairs;i++){
        dp[i]=-1;
    }
    int ans=solve(nStairs,dp);

    // int ans=nways(nStairs);
    cout<< ans;
    return 0;
}