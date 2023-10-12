#include<iostream>
using namespace std;
void saydigit(int n, string arr[])
{

    // base case
    if (n == 0)
    {
        return;
    }

    // processing part

    int digit = n % 10;
    n = n / 10;

    // recursive relation
    saydigit(n, arr);

    cout << arr[digit] << " ";
}
int main()
{
    int num;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cout << "Enter a number ";
    cin >> num;
    
    cout << endl<< endl;

    saydigit(num, arr);

    return 0;
}