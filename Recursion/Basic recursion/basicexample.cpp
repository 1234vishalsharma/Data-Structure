#include<iostream>
using namespace std;
void reachdest(int source,int destination){
    if(source==destination){
        cout<<"Arrived at the destination"<<endl;
        return;
    }
    cout<<"Source is "<<source<<" and destination is "<<destination<<endl;
    source++;
    reachdest(source,destination);
}
int main()
{
    int src=0,dest=10;
    cout<<endl;
    reachdest(src,dest);
    return 0;
}