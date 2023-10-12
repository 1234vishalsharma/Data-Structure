#include<iostream>
using namespace std;
class stack{
    public:
    int *arr,size,top;
    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void pop(){
        if(top<=0){
            cout<<"Stack is Empty"<< endl;
        }
        int x;
        x=arr[top];
        top--;
    }
    void push(int element){
        if(top>=size){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=element;
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }
};
int main()
{
    stack st(10);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    cout<<st.peek();
    st.pop();
    cout<<endl;
    cout<<st.peek();

    

    return 0;
}