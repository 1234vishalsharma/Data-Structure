#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildtree(node *root){
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data of left part of "<<data<<endl;
    root->left=buildtree(root->left);

    cout<<"Enter data of right part of "<<data<<endl;
    root->right=buildtree(root->right);

    return root;
}
void level_order_traversal(node* root){            // Also known as breadth first search
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<"\n";
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}
void inorder(node*  root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node*  root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node*  root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void buildfrom_level_order_traversal(node* &root){
   
    queue<node*> q;
   
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
   
    root=new node(data);
    q.push(root);
   
    while(!q.empty()){
        
        node* temp=q.front(); 
        q.pop();
        
        cout<<"Enter the left part data of "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        
        if(leftdata!=-1){
            temp->left=new node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter the right part data of "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata!=-1){
            temp->right=new node(rightdata);
            q.push(temp->right);
        }

    }

}
// my input data elements is 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1 -1
int main()
{
    node* root=NULL;

    buildfrom_level_order_traversal(root);
    level_order_traversal(root);
    // root=buildtree(root);

    // cout<<"Level order traversal of the tree is "<<endl;
    // level_order_traversal(root);

    // cout<<"Inorder traversal is "<<endl;
    // inorder(root);
    // cout<<endl;
    
    // cout<<"Preorder tree traversal is "<<endl;
    // preorder(root);
    // cout<<endl;
    
    // cout<<"Postorder tree traversal is "<<endl;
    // postorder(root);
    // cout<<endl; 
    return 0;
}