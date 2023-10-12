#include<iostream>
#include<vector>
using namespace std;

void printarray(int arr[],int n){
    cout<<endl;
    cout<<"Array Elements are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;    
}
void findallsubset (int arr[], int size, vector<vector<int>> &ans, vector<int> output, int index){
    if(index>=size){
        ans.push_back(output);
        return;
    }

    // exclude call means no element is pushed in output only index incremented 
    findallsubset(arr,size,ans,output,index+1);

    // include call means you have to push the current index element in the output array
    output.push_back(arr[index]);
    findallsubset(arr,size,ans,output,index+1);

}

int main()
{
    int *arr;
    int size;
    cout<<"Enter the size of the array "<<endl;
    cin>>size;

    arr=new int[size];

    cout<<"Enter the elements of the array "<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    printarray(arr,size);

    vector<int> output;
    vector<vector<int>> ans;
    int index=0;

    findallsubset(arr,size,ans,output,index);

    for(int i=0;i<ans[0].size();i++){
        for(int j =0;j<ans.size();j++){
            cout<<ans[i][j]<<" ";
        } 
        cout<<endl;
    }

    return 0;
}