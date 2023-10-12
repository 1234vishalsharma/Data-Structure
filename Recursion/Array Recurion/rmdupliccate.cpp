#include<iostream>
#include<vector>
using namespace std;
// void print(vector<int>& arr){
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// }
void removeduplicate(vector<int> &arr,int n){
    vector<int> temp;

    for(int i=0;i<n;i++){
        temp.push_back(arr[i]);
        for(int j=0;j<temp.size();j++){
            if(arr[i]==temp[j]){
                temp.pop_back();
            }
        }
    }
    for(int i=0;i<n;i++){
        arr.pop_back();
    }
    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }
   
}
int main()
{
    vector<int> array;
    int size;
    cout<<"Enter the size of array\n";
    cin>>size;
    cout<<"Enter the array elements\n";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<endl;
    removeduplicate(array,size);
    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    return 0;
}