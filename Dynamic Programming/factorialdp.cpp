#include<iostream>
#include<vector>
using namespace std;
int factorialdp(int n,vector<int> dp){
    if(n==0){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=n*factorialdp(n-1,dp);
    return dp[n];
}
int main()
{
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    vector<int> dp(n+1);
    for(int i=0;i<=n;i++){
        dp[i]=-1;
    }
    int ans=factorialdp(n,dp);
    cout<<"Factorial of given number is "<<endl;
    cout<<ans<<endl;
    return 0;
}