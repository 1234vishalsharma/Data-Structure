#include<iostream>
using namespace std;
int main()
{
    int curr[10],result,n;
        curr[0]=0;
        curr[1]=1;
        result=-1;
        cin>>n;
        for(int i=2;i<n;i++){
            curr[i]=curr[i-1]+curr[i-2];
        }
        for(int i=0;i<n;i++){
            result=curr[i];
        }
        if(result!=-1){
            return result;
        }
        else{
            return 0;
        }
    return 0;
}