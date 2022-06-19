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
void inorder(node* root,int &count){
   
   if(root==NULL){
    return;
   }

   inorder(root->left,count);
   
   if(root->left==NULL && root->right==NULL){
    count++;
   }

   inorder(root->right,count);
}

int noOfLeafNodes(node *root){
   int count=0;
    inorder(root,count);
    return count;
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

int main(){
  node* root=NULL;
  root=buildTree(root);
  cout<<"Representation in Level Order Traversal:"<<endl;
  levelOrderTraversal(root);
  cout<<"Number of Leaf Nodes in Tree:";
  cout<<noOfLeafNodes(root);
} 
/*
Output:
Enter the data:12
Element left to 12
Enter the data:22
Element left to 22
Enter the data:-1
Element right to 22
Enter the data:32
Element left to 32
Enter the data:-1
Element right to 32
Enter the data:-1
Element right to 12
Enter the data:65
Element left to 65
Enter the data:-1
Element right to 65
Enter the data:76
Element left to 76
Enter the data:-1
Element right to 76
Enter the data:-1
Representation in Level Order Traversal:
12
22 65
32 76
Number of Leaf Nodes in Tree:2
*/