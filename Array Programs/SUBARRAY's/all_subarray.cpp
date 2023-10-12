#include <iostream>
#include <vector>
using namespace std;
void print_array(int arr[], int end)
{
    if (end < 0)
    {
        return;
    }

    for (int i = 0; i < end; i++)
    {
        cout << arr[i] << " ";
    }
}
void print_subarray(int arr[], int size)
{
    if (size <= 0)
    {
        return;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << "|";
            }
            cout << endl;
        }
    }
}
int main()
{
    int arr[10];
    int n;

    cout << "Enter the size of array (0< size <= 10) " << endl;
    cin >> n;

    cout << "Now Enter the elements of the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    cout << "Initially array is " << endl;
    print_array(arr, n);
    cout << endl;

    cout << "All the subarray of the give array is " << endl;
    print_subarray(arr, n);

    cout << endl;
    cout << endl;
    return 0;
}