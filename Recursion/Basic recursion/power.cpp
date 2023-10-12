#include<iostream>
using namespace std;

double solve(double num,int pow){
    if(pow==0){
        return 1;
    }
    if(pow==1){
        return num;
    }
    return num * solve(num,pow-1);
}

double myPow(double x,int n){
    double ans=solve(x,abs(n/2));
    if(n%2==0){
        if(n < 0){
            return 1 / (ans*ans);
        }else{
            return ans*ans;
        }
    }else{
        if(n < 0){
            return 1 / (x*ans*ans);
        }else{
            return x*ans*ans;
        }
    }
}
int main()
{
    double x;
    int n;

    cout<<"Enter a number "<<endl;
    cin>>x;

    cout<<"Enter the power of the number "<<endl;
    cin>>n;
    
    double ans=myPow(x,n);
    cout<<ans;

    return 0;
}