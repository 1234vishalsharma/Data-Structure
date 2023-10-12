#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int *arr=new int(n);
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int *left=new int(n);
    int *right=new int(n);
    left[0]=arr[0];
    right[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
            if(arr[i]<left[i-1]){
                left[i]=left[i-1];
            }
            else{
                left[i]=arr[i];
            }
        }
    for(int i=n-2;i>=0;i--){
        if(arr[i]<right[i+1]){
            right[i]=right[i+1];
        }
        else{
            right[i]=arr[i];
        }
    }

    cout<<endl<<"Left array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<left[i]<<" ";
    }
    cout<<endl<<"Right array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<right[i]<<" ";
    }
    return 0;
}