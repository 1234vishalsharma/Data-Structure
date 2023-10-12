#include<iostream>
using namespace std;

class arrayc{
    int *arr,size;
    public:
    arrayc(int s){
        this->size=s;
        this->arr=new int[s];
    }
    void create(){
        cout<<"Enter the data of the array "<<endl;
        for(int i=0;i<this->size;i++){
            cin>>this->arr[i];
        }
    }
    void traverse(){
    if(this->size <= 0){
        return;
    }
    for(int i=0;i<this->size;i++){
        cout<<this->arr[i]<<" ";
    }
    cout<<endl;
}
void insert(int data,int pos, arrayc &obj);
};
void arrayc :: insert(int data,int pos,arrayc &obj){
    if(pos > obj.size){
        return ;
    }
    
    for(int i = obj.size-1 ; i >= pos ; i--){
        obj.arr[i+1]=obj.arr[i];
    }
    obj.arr[pos]=data;
    obj.size++;
}
int main()
{
    arrayc ar(5);
    while(1){

    cout<<"Welcome To the Program of Array :"<<endl;
    cout<<"Options:   =   :Operations"<<endl;
    cout<<"1      :   =   :Creation Of Array"<<endl;
    cout<<"2      :   =   :Traversal Of Array"<<endl;
    cout<<"3      :   =   :Insertion Of Array"<<endl;
    cout<<"4      :   =   :deletion Of Array"<<endl;
    cout<<"5      :   =   :Exit From Program"<<endl;
    int choice;
    cin>>choice;
    cout<<endl;
    switch(choice){
        case 1:
            ar.create();
            break;
        case 2:
            ar.traverse();
            break;
        case 3:
            ar.insert(12,2,ar);
            break;
        // case 4:
            // ar.delete();
            // break;
        case 5:
            exit(0);
        default:
            cout<<"Enter a valid choice :-)"<<endl;
            break;
    }
 
    }
    return 0;
}