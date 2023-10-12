#include<iostream>
using namespace std;
bool checkpalindrome(string& st,int s,int e){
    // base case
    if(s>e){
        return 0;
    }
    // processinf part 
    if(st[s]==st[e]){
        return true;
    }
    else{
        return false;
    }
    s++;e--;
    // recursion call 
    checkpalindrome(st,s,e);
}
int main()
{
    string str="CC";
    int i=0,j=str.length()-1;
    cout<<"String is "<<str<<endl;
    bool ans=checkpalindrome(str,i,j);
    if(ans){
        cout<<"Yes it is a palindrome"<<endl;
    }
    else{
        cout<<"No it is not a palindrome"<<endl;
    }
    return 0;
}