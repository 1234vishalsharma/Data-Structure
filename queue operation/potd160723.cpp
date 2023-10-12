#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    queue<int> q;
    q.push(4);
    q.push(3);
    q.push(1);
    q.push(10);
    q.push(2);
    q.push(6);

stack<int> temp;

while(!q.empty()){
    temp.push(q.front());
    q.pop();
}
while(!temp.empty()){
    q.push(temp.top());
    temp.pop();
}

while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
}
    return 0;
}