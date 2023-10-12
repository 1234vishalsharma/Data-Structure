#include<iostream>
using namespace std;

class heap{
    public:
    int *arr;
    int size=-1;

    heap(){
        size=0;
        arr=new int[size];
        arr[0]=-1;
    }


    void insertheap(int value){
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


    void maxheapify(int i){
        int parent=i;
        int left=2*i;
        int right=2*i + 1;
    
        if(left<size && arr[parent]<arr[left]){
            parent=left;
        }
        if(right<size && arr[parent]<arr[right]){
            parent=right;
        }
        if(parent!=i){
            swap(arr[parent],arr[i]);
            maxheapify(parent);
        }
    }

    void print(){
        cout<<"Elements of the heap tree in the form of array are: "<<endl;

        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{

    heap h;
    h.insertheap(50);
    h.insertheap(55);
    h.insertheap(54);
    h.insertheap(52);
    h.insertheap(53);
    h.insertheap(531);
    h.insertheap(153);
    h.insertheap(253);
    cout<<"Printing the values of the heap tree"<<endl;
    h.print();

    cout<<"Converting the given array in max heap"<<endl;
    for(int i=h.size/2;i>=0;i--){
        h.maxheapify(i);
    }
    h.print();

    return 0;
}