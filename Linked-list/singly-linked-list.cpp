#include<iostream>
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

void InsertAtHead(Node* &head,int d){
   Node* temp=new Node(d);
   temp->next=head;
   head=temp;
}

void InsertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}

void InsertAtAnyPosition(Node* &head,Node* &tail,int position,int d){
   
   //to insert at head
    if(position==1){
        InsertAtHead(head,d);
        return ;
    }

    Node* temp=head;
    int cnt=1;
   
   // take temp pointer to position-1 location
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    
    //check if we have to insert at end
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return ;
    }
    
// we got the temp->next for the previous node where we have to insert
//and now insert
    Node* nodetoInsert=new Node(d);
    nodetoInsert->next=temp->next;
    temp->next=nodetoInsert;
}

void DeleteAt(Node* &head, int position){
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else {
        Node* curr=head;
        Node* prev=NULL;
        int count=1;

        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}

void print(Node* &head)
{
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main(){

    int n;
    cout<<"Size:";
    cin>>n;
    int a,b;
    cin>>a;
    Node* node1= new Node(a);
    Node* head=node1;
    Node* tail=node1;
    
    for(int i=2;i<=n;i++){
      cin>>b;
      InsertAtAnyPosition(head,tail,i,b);
    }
    cout<<"Linked List:"<<endl;
    print(head);
    cout<<"Head:"<<head->data<<endl;
    cout<<"Tail:"<<tail->data<<endl;

    DeleteAt(head,2); 
    print(head); 
  
    
}