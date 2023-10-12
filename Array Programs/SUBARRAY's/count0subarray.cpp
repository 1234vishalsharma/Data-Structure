#include<iostream>
using namespace std;
int no_of_subarrays(int n, int arr[]) {
    // Write your code here.
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;i<=j;k++){
                sum+=arr[k];
            }
            if(sum==0){
                count++; 
            }
        }
    }
    return count;
}
int main()
{
    int arr[10];
    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    cout<<"Now enter the elements of the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;

    int ans=no_of_subarrays(n,arr);
    cout<<"The subarrays in the given array having 0 elements are "<<ans<<endl;
    return 0;
}