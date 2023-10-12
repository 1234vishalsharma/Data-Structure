#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool check(string str,string s){
    if(str==s){
        return true;
    }
    return false;
}
int main()
{
    string s1="vishal",s2="lishav";
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(check(s1,s2)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}