#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue <int> pq;
    int k=2;
    int arr[5]={2,5,1,8,4};
    int n=5;
    cout<<"Array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Pushing elements in priority queue "<<endl;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    cout<<"Printing the elements in priority queue "<<endl;
    for(int i=k;i<n;i++){
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);        }
    }
    cout<<pq.top();
    return 0;
}