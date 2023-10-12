                                                                                  // Linear search program 

#include <stdio.h>                                                                // Pre processor directives
int linearsearch(int arr[], int size, int element)
{
    int i;                                                                        // Local variabble i
    for (i = 0; i < size; i++)                                                    // Starting of loop
    {
        printf("%d ", arr[i]);                                                    // Printing the whole array
    }
    for(i=0;i<size;i++){                                                          // Another For loop starting to find the index of element 
        if (arr[i] == element)                                                    // If statement to check weather the element is equal or not in the array.
        {
            return i;                                                             // returning the index when found the element
        }        
    }
    return 0;                                                                     // return 0;
}



int main()                                                                        // main function starting 
{
    int arr[10] = {1, 2, 3, 4, 13, 7, 21, 10, 202, 75};                                // Decleration of array 
    int size = sizeof(arr) / sizeof(int);                                         // size decleration of array
    int element = 13;                                                             // Decleration of element to be found 
    int searchlinearindex;                                                        // Decleration of the search index == index of element to be search  
    searchlinearindex = linearsearch(arr, size, element);                         // assigning the value of linearsearch function in searchindex
    printf("\nThe element %d was found at index %d ",element,searchlinearindex);  // printing the element and its index  
    return 0;                                                                     // Returning nothing means return 0;
}                                                                                 // Program ends .