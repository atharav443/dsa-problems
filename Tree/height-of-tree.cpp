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



int height(node* node){
        
        if(node==NULL){
            return 0;
            
        }
        
        int left=height(node->left);
        int right=height(node->right);
        
        int ans=max(left,right)+1;
        
        return ans;
    }

int main(){
 
  node* root=NULL;

  root=buildTree(root);

  levelOrderTraversal(root);
  cout<<"Height of Tree:";
  cout<<height(root);
  

}
/*
Enter the data:1
Element left to 1
Enter the data:2
Element left to 2
Enter the data:3
Element left to 3
Enter the data:-1
Element right to 3
Enter the data:-1
Element right to 2
Enter the data:-1
Element right to 1
Enter the data:2
Element left to 2
Enter the data:-1
Element right to 2
Enter the data:-1
1 
2 2
3
Height of Tree:3
*/







