#include<iostream>
using namespace std;

void print_array(int arr[],int n){
    if(n<=0){
        return ;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}