#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Node{

public:
       int data;
       Node* left;
       Node* right;
    
       Node(int d){
        data=d;
        left=NULL;
        right=NULL;
       }
};

Node* insertIntoBST(Node* &root,int data){
  
  if(root==NULL){
    root=new Node(data);
    return root;
  }
  if(data>root->data){
     root->right=insertIntoBST(root->right,data);
  }
  if(data<root->data){
     root->left=insertIntoBST(root->left,data);
  }
  return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data != -1){
        insertIntoBST(root,data);
        cin>>data;
    }
}

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
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

void inorderTraversal(Node* root){

    if(root==NULL){
      return;   
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}
void preorderTraversal(Node* root){
    if(root==NULL){
      return;   
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);  
}
void postorderTraversal(Node* root){

    if(root==NULL){
      return;   
    }
  
   
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
    
}

bool searchInBST(Node *root, int x) {
   
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    if(root->data<x){
        searchInBST(root->right,x);    
    }
    else{
         searchInBST(root->left,x);
    }
}

Node* minVal(Node* root){
  Node * temp=root;

  while(temp->left!=NULL){
    temp=temp->left;
  }
  return temp;
}

Node* maxVal(Node* root){
  Node* temp=root;

  while(temp->right!=NULL){
    temp=temp->right;
  }
  return temp;
}

// Delete Node from BST
Node* deleteFromBST(Node* root,int val){
   //base case
   if(root==NULL){
    return root;
   }

   if(root->data==val){
     //0 child
     if(root->left==NULL && root->right==NULL){
        delete root;
        return NULL;
     }

     //1 child
     
     // left child
     if(root->left!=NULL && root->right==NULL){
        Node*temp=root->left;
        delete root;
        return temp;
     }

     //right child
     if(root->left==NULL && root->right!=NULL){
       Node* temp=root->right;
       delete root;
       return temp;
     }
     //2 child
     if(root->left!=NULL && root->right!=NULL){
      int mini=minVal(root->right)->data;
      root->data=mini;
      root->right=deleteFromBST(root->right,mini);
      return root;
     }
   }
   
   if(root->data>val){
    root->left=deleteFromBST(root->left,val);
    return root;
   }
   else{
    root->right=deleteFromBST(root->right,val);
    return root;
   }
}

bool twoSum(Node* root,int n){
  vector<int>in;

}
int main(){
   
   Node* root=NULL;
   
   cout<<"Enter the data to create BST:"<<endl;
   takeInput(root);
   cout<<"Level Order Traversal of BST:"<<endl;
   levelOrderTraversal(root);


   cout<<"\n\n---Different Traversal in BST---"<<endl;
   cout<<"Inorder Traversal in BST:"<<endl;
   inorderTraversal(root);
   cout<<"\nPreOrder Traversal in BST:"<<endl;
   preorderTraversal(root);
   cout<<"\nInorder Traversal in BST:"<<endl;
   postorderTraversal(root);
   
   cout<<"\n\n---Minimum Maximum in Tree---"<<endl;
   cout<<"Minimum Value in BST:"<<minVal(root)->data<<endl;

   cout<<"Maximum Value in BST:"<<maxVal(root)->data<<endl;
   
   cout<<"\n\n---Searching Element in BST---"<<endl;
   int x;
   cout<<"Enter the element to search in BST :";
   cin>>x;
  
   if(searchInBST)
  {
     cout<<"Element is present in BST";
  }
  else{
    cout<<"Element is absent";
  }
  
 
  cout<<"\n\n---Deletion in BST---"<<endl;
  int y;
  cout<<"Enter the Node to delete from BST:";
  cin>>y;
  root=deleteFromBST(root,y);
  cout<<"After deleting Node from BST:"<<endl;
  levelOrderTraversal(root);
}

/*
Output:

Enter the data to create BST:
50 20 70 10 30 90 110 -1
Level Order Traversal of BST:
50
20 70
10 30 90
110


---Different Traversal in BST---
Inorder Traversal in BST:
10 20 30 50 70 90 110
PreOrder Traversal in BST:
50 20 10 30 70 90 110
Inorder Traversal in BST:
10 30 20 110 90 70 50

---Minimum Maximum in Tree---
Minimum Value in BST:10
Maximum Value in BST:110


---Searching Element in BST---
Enter the element to search in BST :110
Element is present in BST

---Deletion in BST---
Enter the Node to delete from BST:110
After deleting Node from BST:
50
20 70
10 30 90
*/