#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
using namespace std;
template <typename T>
class graph{
    public:
    void add(vector<T> mp[],T x,T y){
        // if direction = 0 means it is an undirected graph
        // id direction = 1 means it is an  directed garph
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    void printgraph(vector<int> mp[],int n){
        for(int i=0;i<n;i++){
            cout<<i<<" --> ";
            for(auto j:mp[i]){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    cout<<"Enter the number of vertices "<<endl;
    graph<int> g;
    vector<int> mp[5];
    // g.add(mp,0,1);
    // g.add(mp,0,4);
    // g.add(mp,1,2);
    // g.add(mp,1,3);
    // g.add(mp,1,4);
    // g.add(mp,2,3);
    // g.add(mp,2,4);

        g.add(mp,0,2);
        g.add(mp,0,1);
        g.add(mp,0,3);
        
        g.add(mp,1,3);
        g.add(mp,1,2);
        
        g.add(mp,2,3);
        g.add(mp,2,4);
        
        g.add(mp,3,4);
        
        
    g.printgraph(mp,5);
    return 0;
}