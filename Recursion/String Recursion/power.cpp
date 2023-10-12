#include<iostream>
using namespace std;

int power(int num,int pow){
    if(pow==0){
        return 1;
    }
    if(pow==1){
        return num;
    }

    int ans=power(num,pow/2);

    // even case 
    if(pow%2==0){
        return ans*ans;
    }
    else{
        return num*ans*ans;
    }

}

int power1(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    return a*power(a,b-1);
}

int main()
{
    int a,b;
    
    cin>>a>>b;
    cout<<endl<<endl;
    cout<<power1(a,b);
    return 0;
}
