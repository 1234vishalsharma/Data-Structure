#include<iostream>
using namespace std;
// in this program we are creating a min heap tree
// Properties of heap
// 1.  The parent index value is i;
// 2.  The left node index value is 2*i;
// 3.  The right node index value is 2*i + 1;

class heap{
    public:
    int *arr,size;
    heap(){
        size=0;
        arr=new int[size];
        arr[0]=-1;
    }
    void insertinheap(int value){  // 50 55 53 52 54   arr[1]=50 , arr[2]=55  
        size+=1;
        int index=size;
        arr[index]=value;
        while(index>1){
            int parent=index/2;    // parent=2/2 =1 
            
            if(arr[index]>arr[parent]){
                swap(arr[index],arr[parent]);
                index=parent;
            }
            else{
                return ;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void deletefromheap(){
        if(size==0){
            cout<<"Heap is empty"<<endl;
            return ;
        }
        arr[1]=arr[size];
        size--;
        // take root node to its correct position
        int i=1;
        while(i<size){
            int left=2*i,right=(2*i)+1;
            if(left<size && arr[left]>arr[i]){
                swap(arr[i],arr[left]);
            }
            else if(right<size && arr[right]>arr[i]){
                swap(arr[right],arr[i]);
            }
            else{
                return ;
            }
        }

    }
};
int main()
{
    heap h;
    h.insertinheap(50);
    h.insertinheap(55);
    h.insertinheap(53);
    h.insertinheap(52);
    h.insertinheap(54);
    cout<<endl<<"Heap before applying deletion operation "<<endl;
    h.print();
    // h.deletefromheap();
    // cout<<endl<<"Heap after applying deletion operation "<<endl;
    // h.print();
    return 0;
}