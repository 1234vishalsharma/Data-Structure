// thsi program is the demo of permutation of string characters without repeating the characters

#include<iostream>
#include<vector>
using namespace std;

void solve(string str,vector<string>& ans,int index){
    if(index>=str.length()){
        ans.push_back(str);
        return;
    }
    for(int i=index;i<str.length();i++){
        swap(str[i],str[index]);

        solve(str,ans,index+1);
        // backtrack the swaping
        swap(str[i],str[index]);
    }
}

int main()
{
    string str="ABC";
    vector<string> ans;
    int index=0;
    solve(str,ans,index);


    // printing the 2D vector
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

/*
    Input str="ABC"
    output: ["ABC","ACB","BAC","BCA","CAB","CBA"];
*/