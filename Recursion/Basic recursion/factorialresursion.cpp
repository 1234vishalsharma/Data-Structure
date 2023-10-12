#include <iostream>
using namespace std;
int factorial(int num)
{

    // base case

    if(num==0){
        return 1;
    }

    // Recursive relation
    
    return num*factorial(num-1);
}
int main()
{
    int n;
    cout << "Enter a number to find its factorial" << endl;
    cin >> n;
    int res = factorial(n);
    cout << res << endl;

    return 0;
}