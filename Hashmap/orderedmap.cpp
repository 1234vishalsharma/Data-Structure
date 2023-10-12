#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,int> mp;
    
    int arr[]={1,3,2,1,2,3,1,4,4,4,4};
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}