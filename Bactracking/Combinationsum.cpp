#include<iostream>
#include<vector>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void solve(vector<int>& candidates, int target,vector<vector<int>>& ans,vector<int>& output,int i){
    if(i == candidates.size()){
        if(target==0){
            ans.push_back(output);
        }
            return ;
    }

        if(candidates[i]<=target){
            output.push_back(candidates[i]);
            solve(candidates,target-candidates[i],ans,output,i);
            output.pop_back();
        }

        solve(candidates,target,ans,output,i+=1);
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> output;
        vector<vector<int>> ans;
        int ind=0;
        solve(candidates,target,ans,output,ind);
        return ans;
    }
int main()
{
    int arr[4]={2,3,6,7};
    int k=7;
    int n=4;
    combinationSum(arr,k);
    return 0;
}
