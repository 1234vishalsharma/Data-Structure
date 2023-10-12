#include<iostream>
using namespace std;

string reverse(string str){
    int i=0,j=str.length()-1;
    while(i<=j){
        swap(str[i],str[j]);
        i++;j--;
    } 
    return str;
}

void reverse(string &str,int i,int j){
    if(i>=j){
        return;
    }

    swap(str[i],str[j]);

    reverse(str,i++,j--);
}

int main()
{
    
    string temp="dsgds";
    cout<<temp;

    cout<<endl;

    cout<<reverse(temp);
    string ans=reverse(temp);
    cout<<ans;
    return 0;
}