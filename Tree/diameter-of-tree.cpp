#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

node* buildTree(node* root){
    int data;
    cout<<"Enter the data";
    cin>>data;
    root=new node(data);
    
    if(data==-1){
        return NULL;
    }
    cout<<"Element left to "<<data<<endl;
    root->left=buildTree(root->left); 

    cout<<"Element right to"<<data<<endl;
    root->right=buildTree(root->right);
    
    return root;
}

void levelorderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
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
int height(node* root){
    if(root==NULL){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    int ans=max(left,right)+1;
    return ans;
}
int diameter(node* root){
    if(root==NULL){
        return 0;
    }
    int op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3=height(root->left)+height(root->right)+1;

    int ans=max(op1,max(op2,op3));
    return ans;
}
int main(){
  node* root=NULL;

  root=buildTree(root);

  levelorderTraversal(root);

  cout<<"Diameter of Tree:";
  cout<<diameter(root);
}