/* Approach 1  recursive way



#include<iostream>
using namespace std;

int fibb(int range){
    // base case
    if(range==0){
        return 1;       
    }
    if(range==1){
        return 1;
    }

    return fibb(range-1) + fibb(range-2);
}

int main()
{
    int range;
    cout<<"Enter the range of the Fibnocci series\n";
    cin>>range;
    cout<<fibb(range);
    return 0;
}   */

// Approach 2 Tabulation Method and also known as bottom up dynamic programming 
#include<iostream>
#include<vector>
using namespace std;


int fibb(int range,vector<int>& dp){
    if(range<=1){
        return range;
    }
    if(dp[range]!=-1){
        return dp[range];
    }  

    return dp[range]=fibb(range-2,dp)+fibb(range-1,dp); 

}

int main()
{
    int range;
    cout<<"Enter the range of the Fibonacci series\n";
    cin>>range;
    vector<int> dp(range+1,-1);
    cout<<fibb(range,dp);
    return 0;
}