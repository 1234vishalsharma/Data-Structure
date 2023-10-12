#include<iostream>
using namespace std;

void print_array(int arr[],int st,int ed){
    if(st>=ed){
        return ;
    }
    for(int i=st;i<=ed;i++){
        cout<<arr[i]<<" ";
    }
}