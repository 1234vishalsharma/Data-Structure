#include<iostream>
using namespace std;
int printfiabnocci(int range){
    if(range==0){
        return 0;
    }
    if(range==1){
        return 1;
    }
    return {printfiabnocci(range-1)+printfiabnocci(range-2)};

}
int main()
{
    int range;
    cout<<"Enter the range of the fiabnocci series ";
    cin>>range;
    cout<<printfiabnocci(range);
    return 0;
}