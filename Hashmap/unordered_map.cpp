#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,int> mp;
    cout<<"Enter some set of keys "<<endl;
    
    for(int i=0;i<10;i++){
        int key;
        cin>>key;
        mp[key]++;
    }
    cout<<"Key  :  Frequency"<<endl;
    for(auto it:mp){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    return 0;
}