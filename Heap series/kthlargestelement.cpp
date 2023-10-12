#include<iostream>
#include<queue>
using namespace std;
int kthhlargestelement(int arr[],int l,int r,int k){
    // step 1
    priority_queue<int,vector<int>, greater<int>> pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    // step 2
    for(int i=k;i<=r;i++){
        if(arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    // step 3
    int ans=pq.top();
    return ans;

}
int main()
{
    int arr[6]={7,10,4,3,20,15};
    int size=6;
    cout<<kthhlargestelement(arr,0,size-1,1);
    return 0;
}