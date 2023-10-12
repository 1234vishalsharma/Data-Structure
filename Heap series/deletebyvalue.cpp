#include<iostream>
using namespace std;
class heap{
    public:
    int arr[20],size;
    heap(){
        arr[0]=-1;
        size=0;
    }
    void insertinheap(int value){
        size+=1;
        int index=size;
        arr[index]=value;
        while(index>1){
            int parent=index/2;
            
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
    void deletefromheap(int val){
        int index=-1;
        if(size==0){
            cout<<"Heap is empty"<<endl;
            return ;
        }
        for(int i=1;i<=size;i++){
            if(val==arr[i]){
                index=i;
            }
        }
        // take root node to its correct position
        if(index=-1){
            return ;
        }
        int i=index;
        swap(arr[i],arr[size]);
        size--;
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
    h.deletefromheap(54);
    h.deletefromheap(55);
    cout<<endl<<"Heap after applying deletion operation "<<endl;
    h.print();
    cout<<h.size;
    return 0;
}