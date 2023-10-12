// // Inserting values in heap tree
// #include<iostream>
// using namespace std;
// class heap{
//     public:
//     int arr[20],size;
//     heap(){
//         arr[0]=-1;
//         size=0;
//     }
//     void insert(int value){
//         size++;
//         int index=size;
//         arr[index]=value;
//         while(index>1){
//             int parent=index/2;
//             if(arr[parent]<arr[index]){
//                 swap(arr[parent],arr[index]);
//                 index=parent;
//             }else{
//                 return;
//             }
//         }
//     }
//     void printheap(){
//         if(size==0){
//             return;
//         }else{
//             for(int i=1;i<=size;i++){
//                 cout<<arr[i]<<" ";
//             }
//             cout<<endl;
//         }
//     }
    
// };
// int main(){
//     heap h;
//     h.insert(343);
//     h.insert(173);
//     h.insert(52);
//     h.insert(58);
//     h.insert(99);
//     h.insert(789);
//     h.printheap();
// }








// // Function to convert the given array into max heap
// #include<iostream>
// using namespace std;
// void maxheapify(int arr[],int size,int index){
//     int parent=index;
//     int left=2*index;
//     int right=2*index + 1;
//     if(left<size && arr[left]>arr[parent]){
//         swap(arr[left],arr[parent]);
//         parent=left;
//     }
//     if(right<size && arr[right]>arr[parent]){
//         swap(arr[right],arr[parent]);
//         parent=right;
//     }
//     if(parent!=index){
//         maxheapify(arr,size,index);
//     }

// }
// int main()
// {
//     int arr[5]={123,321,456,875,987},size=5;
//     cout<<"Printing the heap tree before converting it into max heap"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=size/2;i>=0;i--){
//         maxheapify(arr,size,i);
//     }
//     cout<<"Printing the heap tree after converting it into max heap"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



// // Function to convert the given array into min heap
// #include<iostream>
// using namespace std;
// void minheapify(int arr[],int size,int index){
//     int parent=index;
//     int left=2*index;
//     int right=2*index + 1;
//     if(left<size && arr[left]<arr[parent]){
//         swap(arr[left],arr[parent]);
//         parent=left;
//     }
//     if(right<size && arr[right]<arr[parent]){
//         swap(arr[right],arr[parent]);
//         parent=right;
//     }
//     if(parent!=index){
//         minheapify(arr,size,index);
//     }

// }
// int main()
// {
//     int arr[5]={123,321,456,875,987},size=5;
//     cout<<"Printing the heap tree before converting it into min heap"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=size/2;i>=0;i--){
//         minheapify(arr,size,i);
//     }
//     cout<<"Printing the heap tree after converting it into min heap"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }





// Function to heap sort the values given in array 
#include<iostream>
using namespace std;
void heapify(int arr[],int size,int index){
    int parent=index;
    int left=2*index,right=(2*index) + 1;
   
    if(left<size && arr[left]>arr[parent]){
        swap(arr[parent],arr[left]);
        parent=left;
    }
    if(right<size && arr[right]>arr[parent]){
        swap(arr[parent],arr[right]);
        parent=right;
    }
    if(parent!=index){
        heapify(arr,size,parent);
    }
}
void heapsort(int arr[],int size){
    for(int i=size/2;i>=0;i--){
        heapify(arr,size,i);
    }
    while(size>1){
        swap(arr[0],arr[size-1]);
        size--; 
        heapify(arr,size,0);
    }
}
int main()
{
    int arr[5]={124,345,231,543,675},size=5;

    heapsort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}