#include <iostream>
#include<vector>
using namespace std;
long long maxProduct(int arr[], int n)
{
    // code here
    long long maxproduct = 1;
    long long product=1;
    for (int j = 0; j < n; j++)
        {
            product *= arr[j];
            maxproduct = max(product, maxproduct);
            if (product == 0)
            {
                product = 1;
            }
        }
    
    if(maxproduct<=0){
        return 0;
    }
    else{
        return maxproduct;
    }
}
int main()
{
    int arr[5]={0,0,-5,0,0};
    long long ans=maxProduct(arr,5);
    cout<<ans;
    return 0;
}