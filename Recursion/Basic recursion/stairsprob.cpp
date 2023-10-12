#include<iostream>
using namespace std;
int no_of_ways(int num){
    if(num<0)
        return 0;
    
    if(num==0)
        return 1;

    return no_of_ways(num-1)+no_of_ways(num-2);
}
int main()
{
    int n;
    cout<<"Enter the number of stairs ";
    cin>>n;
    cout<<no_of_ways(n);
    return 0;
}