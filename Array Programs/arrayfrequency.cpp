#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,int> mp;
    int arr[5]={1,3,2,3,1};
    int n=5;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    cout<<"After pushing array elements in hash map"<<endl;
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}