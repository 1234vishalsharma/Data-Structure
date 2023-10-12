#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

void add(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void print(vector<int> adj[],int v){
    unordered_map<int,bool> mp;
    queue<int> que;
    for(int i=0;i<v;i++){
        mp.insert({i,false});
        int frontnode;
        cout<<frontnode<<" ";
        for(auto j:adj[i]){
            cout<<j<<", ";
        }
        cout<<endl;
    }
    
    // for(auto it:mp){
    //     int frontnode;
    //     if(it.second==false){
    //         que.push(it.first);
    //         frontnode=que.front();
    //         que.pop();
    //         cout<<frontnode<<" ";
            
    //     }
    // }
}
int main()
{
       vector<int> mp[5];
        
        add(mp,0,2);
        add(mp,0,1);
        add(mp,0,3);
        
        add(mp,1,3);
        add(mp,1,2);
        add(mp,2,3);
        add(mp,2,4);
        add(mp,3,4);
        
        

    
    print(mp,5);
    return 0;
}