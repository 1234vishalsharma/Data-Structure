// wap to convert binary to decimal in cpp 

#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int getdecimal(string num){
    int ans=0;
    int j=num.length()-1;
    int base=1;
    while(j>=0){
        int dig=num[j]-'0';
        ans+=base * dig;
        base*=2;
        j--;
    }
    return ans;
}
string getBinary(int num){
    string ans="";
    while(num>=0){
        int lastrdigit=num%2;
        char dig=lastrdigit + '0';
        ans+=dig;
        num=num/2;
    }
    return ans;
}

int main()
{
    string a="0",b="0";

    int decimal1=getdecimal(a);
    int decimal2=getdecimal(b);


    cout<<decimal1<<" "<<decimal2<<endl;

    int sum=decimal1+decimal2;
    string ans=getBinary(sum);
    reverse(ans.begin(),ans.end());
    cout<<"The binary of the above digit is "<<ans<<endl;
    return 0;
}