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
    if(data > root->data){
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

      while(data!=-1){
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
void inorder(Node* root,vector<int>& in){
    if(root==NULL){
        return;
    }

    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}
bool twoSum(Node* root, int data){
    vector<int>in;
    inorder(root,in);
    int i=0,j=in.size()-1;

    while(i<j){
        int sum=in[i]+in[j];

        if(sum==data){
            return true;
        }
        else if(sum>data){
             j--;
        }
        else{
            i++;
        }
    }
    return false;
}
int main(){
    Node* root=NULL;
    cout<<"Enter the data to create BST:"<<endl;
    takeInput(root);
    cout<<"Level order Traversal BST:"<<endl;
    levelOrderTraversal(root);
    int target;
    cout<<"Enter the target number:"<<endl;
    cin>>target;
    cout<<"Target sum in BST:";
    cout<<bool( twoSum(root,target));
    

}
/*
Output:
Enter the data to create BST:
5 3 7 6 8 -1
Level order Traversal BST:
5
3 7
6 8
Enter the target number:
10
Target sum in BST:1
*/