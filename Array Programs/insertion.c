// In insertion We have to insert the element at the given position in the array

// In this program i am inseting the element at the index = 3 so i created the two function 1. Display To dispaly the array  and 2. indInsertion to insert the element at the 3 index  


#include <stdio.h>

            // code for traversal
void display(int arr[], int n)                                               // Display function 
{
    for (int i = 0; i < n; i++)                                               
    {
        printf("%d\n", arr[i]);
    }
}     
            // Code for insertion
int indInsertion(int arr[], int size, int element, int capacity, int index)   // Insertion function 
{                                                                             // size = size of array covered by elements 
    if (size >= capacity)                                                     // element = inserted element 
    {                                                                         // capacity = Total capacity of array == 10
        return -1;                                                            // index = At which place you want to insert element                 
    }
    printf("Enter the element you want to enter in the array: ");
    scanf("%d",&element);
    for (int i = size - 1; i >= index; i--)                                   //i=size -1==5-1==4 , i>=index == i>=3 (inserting index)             
    {                                                                         // Decrement in loop.          
        arr[i + 1] = arr[i];                                                  // arr[5]=arr[4]   
    }
    arr[index] = element;                                                     // Inserting the element at index position.                  
    return 1;
}

int main()                                                                    // Main function .  
{
    int arr[10] = {1, 2, 6, 78, 102};                                         // Array decleration .      
    int size = 5, element, index = 3,capacity=10;                                     //  Decleration of size , element , and index position.   
    display(arr, size);                                                       // Dispaly function calling.              
    indInsertion(arr, size, element, capacity, index);                              // index insertion function calling           
    size = size + 1;                                                          // increament in size with +1 .             
    display(arr, size);                                                       // Dispaly function calling      

    return 0;
}