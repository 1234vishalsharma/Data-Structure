#include<iostream>
#include<stack>
using namespace std;
int longestValidParentheses(string s) {
        stack<char> st;
        int n=s.length();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    if(s[i]==')' && st.top()!='('){
                        count+=0;
                    }
                    else if(s[i]=='}' && st.top()!='{') {
                        count+=0;
                    }
                    else if(s[i]==']' && st.top()!='['){
                        count+=0;
                    }
                    else{
                        count+=2;
                        st.pop();
                    }
                }else{
                    count+=0;
                }
            }

        }
        return count;
    }
int main()
{
    string s="(){()";
    int ans=longestValidParentheses(s);
    cout<<ans;
    cout<<endl;
    return 0;
}