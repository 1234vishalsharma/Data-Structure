#include<iostream>

using namespace std;
int main()
{
    int arr[2]={-2,3};
    int pro=arr[0];
    cout<<"Calculating product Please wait..."<<endl;
    system("cls");
    for(int i=1;i<2;i++){
        pro*=arr[i];
    }
    cout<<endl;
    cout<<pro<<endl;
    return 0;
}