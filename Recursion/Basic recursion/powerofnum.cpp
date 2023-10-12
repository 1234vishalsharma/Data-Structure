#include<iostream>
using namespace std;
int getrespownum(int num,int pow){
    // base case
    if(pow==0){
        return 1;
    }
    if(pow==1){
        return num;
    }

    // recursive relation
    int res=getrespownum(num,pow/2);
    if(pow%2==0){
        return res*res;
    }
    else{
        return num*res*res;
    }
}
int main()
{
    int N;
    int pow;
    cout<<"Enter a number"<<endl;
    cin>>N;
    cout<<"enter the power of the number"<<endl;
    cin>>pow;
    int res=getrespownum(N,pow);
    cout<<res;
    return 0;
}