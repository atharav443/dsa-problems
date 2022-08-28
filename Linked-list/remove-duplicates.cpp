// Remove Duplicates from 1. Sorted and 2.Unsorted

#include<bits/stdc++.h>
using namespace std;


class Node{
 public:
  int data;
  Node* next;
  Node(int d){
    this->data=d;
    this->next=NULL;
  }
};
 
void InsertAtHead(Node* &head,int data){
      Node* temp=new Node(data);
      temp->next=head;
      head=temp;
}

void InsertAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=tail->next;
}
void Insert(Node* &head,Node* &tail,int position,int data){
    if(position==1){
        InsertAtHead(head,data);
        return ;
    }
   
   Node* temp=head;
   int cnt=1;

   while(cnt<position-1){
    temp=temp->next;
    cnt++;
   }

   if(temp->next==NULL){
    InsertAtTail(tail,data);
    return ;
   }

   Node* nodetoInsert=new Node(data);
   nodetoInsert->next=temp->next;
   temp->next=nodetoInsert;

}

void print(Node* Head){
    Node* temp=Head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}


/* For Sorted Linked list
void removeDuplicates(Node* &head){  
 
    Node* temp=head;
    Node* next_next=NULL;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            next_next=temp->next->next;
            delete(temp->next);
            temp->next=next_next;
           
        }
        else{
            temp=temp->next;
        }
    } 
}
*/

void removeDuplicatesfromUnsorted(Node* head){
   
   unordered_set<int>seen;
   Node* curr=head;
   Node* prev=NULL;

   while(curr!=NULL){
    
    if(seen.find(curr->data)!=seen.end()){
        prev->next=curr->next;
        delete(curr);
    }
    else{
        seen.insert(curr->data);
        prev=curr;
    }
    
    curr=prev->next;

   }
}




int main(){
   int n,a,b;
   cout<<"Size of Linked List:";
   cin>>n;
   cout<<"Enter the elements:";
   cin>>a;
   Node* Node1=new Node(a);
   Node* head=Node1;
   Node* tail=Node1;

   for(int i=2;i<=n;i++){
    cin>>b;
    Insert(head,tail,i,b);
   }
   
   cout<<endl;

   removeDuplicatesfromUnsorted(head);
   print(head);
}
