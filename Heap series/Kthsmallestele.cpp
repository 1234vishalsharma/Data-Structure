#include<iostream>
#include<queue>
using namespace std;
int Kthsnallestelement(int arr[],int l,int r,int k){
    // step 1
    priority_queue<int> pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    // step 2
    for(int i=k;i<=r;i++){
        if(arr[i]<pq.top()){
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
    cout<<Kthsnallestelement(arr,0,size-1,3);
    return 0;
}