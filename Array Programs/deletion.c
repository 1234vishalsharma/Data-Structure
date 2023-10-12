#include <stdio.h>                                    //    Pre processor directives
                                                      //    Program starts 
void display(int arr[], int n)                        //    Display function
{
    for (int i = 0; i < n; i++)                       //    For loop starting to print the array formed       
    {
        printf("%d ", arr[i]);                        //    Printing the array formed
        
    }
}

void inddeletion(int arr[], int size, int index)    //      Index point deletion function 
{
    for (int i = index; i < size; i++)              //      For loop starting (Starts from index and ends at point size -1 because i<size(It wil not take the value of size)).
    {
        arr[i]=arr[i+1];                            //      operation condition  arr[2]=arr[3]  becasue i=2; and i+1=3
    }
}

int main()                                          //      Main function 
{
    int size = 5, index = 2;                        //      Local variable decleration   size and index values
    int arr[10] = {1, 2, 3, 4, 45};                 //      Decleration of array elements
    display(arr,size);                              //      Calling display function 
    inddeletion(arr,size,index);                    //      calling index deletion function 
    size=size-1;                                    //      Recreating size (Decrease size by 1)  
    printf("\n");                                   //      Giving a one line space 
    display(arr,size);                              //      Displaying the array after deletion 
    return 0;                                       //      Returning value
}                                                   //      Program ends