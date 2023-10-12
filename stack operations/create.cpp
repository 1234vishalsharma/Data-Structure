#include<iostream>
#include<stack>
using namespace std;
class stackim{
    int st[10],size=10,top=-1;

    public:
    void push(int x){
        if(top<size){
            top++;
            st[top]=x;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }  
    void pop(){
        size--;
        top--;
    }
    int peek(){
        int x=st[top];
        return x;
    }
    
};
int main()
{
    stackim s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    s.push(11);
    s.push(12);
   
 



    cout<<s.peek();
    s.pop();
    cout<<endl;
    cout<<s.peek();


    // stack<int> s;
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);
    // s.push(10);

    // cout<<s.top();
    // cout<<endl;
    // cout<<s.size();
    // cout<<endl;
    // s.pop();
    // cout<<s.top();
    // cout<<endl;
    // s.pop();
    // cout<<s.top();
    // cout<<endl;
    // s.pop();
    // cout<<s.top();
    // cout<<endl;
    
    // if(!s.empty()){
    //     cout<<"Stack is not empty "<<endl;
    // }
        
    return 0;
}