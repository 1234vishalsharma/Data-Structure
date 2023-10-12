#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    string str="I.am.vishal.sharma";
    stack<string> st;
    cout<<str;
    for(int i=0;i<str.size();i++){
        string word;
        if(str[i]=='.'){
            continue;
        }
        while(i<str.size() && str[i]!='.'){
             word+=str[i];
             i++;
        }        
        st.push(word);
    }
    
    string strres="";
    while(!st.empty()){
        strres+=st.top();
        st.pop();
        if(!st.empty()){
            strres+='.';
        }
    }
    cout<<endl<<strres;
    return 0;
}