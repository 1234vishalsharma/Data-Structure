#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){

    int pivit=arr[s];
    int count=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivit){
            count++;
        }
    }

    int pivit_index=s+count;

    swap(arr[pivit_index],arr[s]);

    int i=s,j=e;

    while(i<pivit_index && j>pivit_index){

        while(arr[i]<pivit){
            i++;
        }
        while(arr[j]>pivit){
            j--;
        }
        if(arr[i]>pivit && arr[j]<pivit){
            swap(arr[i],arr[j]);
        }
    }

    return pivit_index;
}



void quick_sort(int arr[],int s,int e){
    if(s>=e){
        return;
    }

    int p=partition(arr,s,e);

    quick_sort(arr,s,p-1);
    quick_sort(arr,p+1,e);    
}
int main()
{
    int arr[7]={45,3,23,19,10,5,2};
    int s=0,e=6;

    cout<<"Before sort"<<endl;
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }

    quick_sort(arr,s,e);
    cout<<endl;
    cout<<"After sort"<<endl;
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}