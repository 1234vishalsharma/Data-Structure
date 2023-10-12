#include<iostream>
using namespace std;
int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        for(int i=0;i<=n;i++){
            int leftsum=0,rightsum=0;
            for(int j=0;j<i;j++){
                leftsum+=a[j];
            }
            for(int k=i+1;k<n;k++){
                rightsum+=a[k];
            }
            
            if(leftsum==rightsum){
                cout<<leftsum<<"  "<<rightsum<<endl;
                return i+1;
            }
        }
        return -1;
    }

int main()
{
    long long arr[20];
    int size;
    cout<<"Enter the size of the arr"<<endl;
    cin>>size;
    cout<<"Enter the elements of the array "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int ans=equilibriumPoint(arr,size);
    cout<<endl<<ans;
    return 0;
}