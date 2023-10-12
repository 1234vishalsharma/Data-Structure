#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main()
{
    set<int> st;
    int *arr,n;
    vector<int> ans;
    map<int,int> mp;
    cout<<"Size of array: "<<endl;
    cin>>n;

    arr=new int[n];

    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array elements are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    cout<<"Value  :  Frequency"<<endl; 
    for(auto it:mp){
        cout<<it.first<<"  :  "<<it.second<<endl;
    }
    int minfreq =100000;
    int maxnum=-1;
    for(auto it:mp){        
        if(minfreq==100000){
            if(maxnum<it.first){
                maxnum=it.first;
            }
        }
        else if(minfreq>it.second){
            minfreq=it.second;
        }  
    }

    cout<<maxnum<<endl;
    
    cout<<endl;
    return 0;
}