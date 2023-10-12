#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node *left,*right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* insertintree(node* root){
    int data;
    cout<<"Enter the data :"<<endl;
    cin>>data;

    root=new node(data);
    if(data==-1){
        return NULL;
    }

    cout<<"Enter the left node data: "<<data;
    root->left=insertintree(root->left);

    cout<<"Enter the right node data: "<<data;
    root->right=insertintree(root->right);
}

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

node* levelordertraversal(node* root){
    queue<node*> q;
    if(root==NULL){
        return NULL;
    }
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
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

int height(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=height(root->left);
    int rheight=height(root->right);

    if(lheight>rheight){
        return lheight+1;
    }else{
        return rheight+1;
    }
}

int diameter(node* root){
    if(root==NULL){
        return 0;
    }

    int leftpart=diameter(root->left);
    int rightpart=diameter(root->right);
    int combination=height(root->left) + height(root->right) + 1; 

    return max(combination,max(leftpart,rightpart));
}

pair<int,int> diameterfast(node* root){
    if(root==NULL){
        pair<int,int> p=make_pair(0,0);
        return p;
    }
    pair<int,int> left=diameterfast(root->left);
    pair<int,int> right=diameterfast(root->right);

    int leftsol=left.first;
    int rightsol=right.first;
    int bothsol=left.second+right.second + 1;

    pair<int,int> ans;
    ans.first=max(leftsol,max(rightsol,bothsol));
    ans.second=max(left.second,right.second) + 1;

    return ans;
}

void reverseordertraversal(node* root,int level){
    if(root==NULL){
        return;
    }
    if(level==1){
        cout<<root->data<<" ";
    }
    if(level>1){
        reverseordertraversal(root->left,level-1);
        reverseordertraversal(root->right,level-1);
    }
}

int main()
{
    node* root=NULL;

    root=insertintree(root);

    cout<<"preorder traversal "<<endl;
    preorder(root);
    cout<<endl;

    cout<<"level order travaersal"<<endl;
    levelordertraversal(root);

   int h=diameterfast(root).second;
    cout<<"Height of tree: "<<h<<endl;
    for(int i=h;i>0;i--){
        reverseordertraversal(root,i);
    }
    cout<<endl;
    cout<<"diameter of the tree is: "<<diameterfast(root).first;

    return 0;
}

// 10 20 40 60 -1 -1 -1 50 70 90 -1 -1 -1 80 -1 -1 30 -1 -1
