                               // Binary search program of a sorted array.

#include <stdio.h>
int binarysearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] > element)
        {
            high = mid; 
        }
        else
        {
            low = mid;
        }
    }
    return -1;
}
int main()                                          // main function starting
{
    int arr[10] = {1, 2, 3, 4, 10, 17, 21, 23, 26}; // Decleration of array
    int size = sizeof(arr) / sizeof(int);           // size decleration of array
    int element = 23;                               // Decleration of element to be found
    int searchbinaryindex;                          // Decleration of the search index == index of element to be search
    searchbinaryindex = binarysearch(arr, size, element);
    printf("The element %d was found at the index %d ", element, searchbinaryindex);
    return 0;                                       // Returning nothing means return 0;
}                                                   // Program ends .