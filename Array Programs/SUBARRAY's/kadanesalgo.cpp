// This Algorithm is also known as maximium sum subarray
#include<iostream>
#include<vector>
using namespace std;
int solve_by_kadane(vector<int> array,int n){
    int sum=0,maxsum=array[0];
    for(int i=0;i<n;i++){
        sum+=array[i];

        maxsum=max(maxsum,sum);
        
        if(sum<0){
            sum=0;
        }
    }
    return maxsum;
}
int main()
{
    int size;
    cout<<"Enter the size of vector "<<endl;
    cin>>size;

    vector<int> arr;
    cout<<"Now enter the elments of vector "<<endl;
    
    for(int i=0;i<size;i++){
        int data;
        cin>>data;
        arr.push_back(data);
    }
    cout<<endl;

    int ans=solve_by_kadane(arr,size);
    
    cout<<ans;
    return 0;
}