#include<iostream>
using namespace std;
void reverse(string& str,int i,int j){
    cout<<endl;
    cout<<str;
    // base case
    if(i>=j){
        return;
    }
    // processing part 
    swap(str[i],str[j]);
    i++;j--;
    // recursion call 
    reverse(str,i,j);

}




int main()
{
    int i=0;
    string name="Vishal";
    int j=name.length()-1;
    cout<<"String is "<<name<<endl;
    reverse(name,i,j);
    cout<<endl<<endl;
    cout<<"Reversed string is "<<name<<endl;
    return 0;
}