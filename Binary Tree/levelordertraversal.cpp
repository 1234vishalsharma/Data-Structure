#include<iostream>
#include<queue>
#include<vector>
#include<stack>
using namespace std;

class tree{
    public:
    int data;
    tree* left;
    tree* right;
    
    tree(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
tree* build_tree(tree* root){
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;
    root=new tree(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter the left node data: "<<data<<endl;
    root->left=build_tree(root->left);
    cout<<"Enter the right node data: "<<data<<endl;
    root->right=build_tree(root->right);

    return root;
}


void search_in_tree(tree* root,int target){
    if(root==NULL){
        return ;
    }
    if(root->data==target){
        cout<<"Found in tree"<<endl;
        return;
    }
    search_in_tree(root->left,target);
    search_in_tree(root->right,target);
}

// The level order traversal is also known as BFS (Breadth First Search traversal)
void level_order_traversal(tree* root){
    queue<tree*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        tree* temp=q.front();
        q.pop();
        
        
        if(temp==NULL){
            cout << endl ;
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


vector<int> right_view(tree* root){
    vector<int> ans;
    queue<tree*> q;
    q.push(root);

    while(!q.empty()){
        int size=q.size();
        
        while(size){
            tree* tmp=q.front();
            if(size==1){
                ans.push_back(q.front()->data);
            }
            if(tmp->left){
                q.push(tmp->left);
            }
            if(tmp->right){
                q.push(tmp->right);
            }
            q.pop();
            size--;
        }
    }
    return ans;
}

int height(tree* root){
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


int main()
{
    tree *root=NULL;
    root = build_tree(root);
    // input 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // cout<<"Level order teaversal output BFS Traversal"<<endl;
    // level_order_traversal(root);
    // cout<<"Height of tree is "<<height(root);

    // cout<<endl;
    // vector<int> res;
    // cout<<"Right View trial is: "<<endl;
    // res=right_view(root);

    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }
    // cout<<endl;


     // searching feture in tree
    search_in_tree(root,11);

    return 0;
}