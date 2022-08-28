#include<iostream>
#include<queue>
using namespace std;

class node
{
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
    cout<<"Enter the data:";
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Element left to "<<data<<endl;
    root->left=buildTree(root->left);
  
   cout<<"Element right to "<<data<<endl;
   root->right=buildTree(root->right);

   return root;

}


void levelOrderTraversal(node* root){
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


void inorder(node* root){   
    // INORDER=LNR
    if(root==NULL){
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){   
    // PREORDER=NLR
    if(root==NULL){
        return;
    }
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){   
    // POSTORDER=LRN
    if(root==NULL){
        return;
    }
    
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


int main(){
 
  node* root=NULL;

  root=buildTree(root);

  levelOrderTraversal(root);

  cout<<"Inorder Traversal:";
  inorder(root);

  cout<<"\nPreorder Traversal:";
  preorder(root);

  cout<<"\nPostorder Traversal:";
  postorder(root);

}