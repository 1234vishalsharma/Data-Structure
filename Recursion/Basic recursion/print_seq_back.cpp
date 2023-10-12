// Tail recursion example

#include<iostream>
using namespace std;
void print(int num){

    // base case

    if(num==0){
        return ;
    }
    
    // Processing part

    cout << num << endl;

    // recurrence relation or recursive relation

    print(num-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<endl;
    print(n);
    return 0;
}