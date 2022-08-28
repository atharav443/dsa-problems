// Binary equivalent of decimal in  LL
// reverse in linked list

#include<iostream>
#include<string>
#include<math.h>
#include<vector>
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



int toDecimal(Node* head){
 int res=0;
  
  while(head!=NULL){
     res=(res<<1)+head->data;
    head=head->next;
  }
   return res;
}

void InsertatHead(Node* &head,int d)
{
    Node* n=new Node(d);
    n->next=head;
    head=n;
}

void InsertatTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=tail->next;
}

// to insert Node at any position
void Insert(Node*&head, Node* &tail,int position,int data){
  
   if(position==1){
       InsertatHead(head,data);
       return ;
   }
   
   Node* temp=head;
   int cnt=1;

   while(cnt<position-1){
    temp=temp->next;
    cnt++;
   }

   while(temp->next==NULL){
    InsertatTail(tail,data);
    return ;
   }

   Node* n2=new Node(data);
   n2->next=temp->next;
   temp->next=n2;


}


// To delete any node
void Delete(Node* &head, int position){
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
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

Node* Reverse(Node*&head){
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}



void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){
   int a,b,c;
   cout<<"Size of Linked List:";
   cin>>a;
   cout<<"Enter the data:";
   cin>>b;
   Node* n1=new Node(b);
   Node* head= n1;
   Node* tail=n1;
   for(int i=2;i<=a;i++){
    cin>>c;
    Insert(head,tail,i,c);
   }
   print(head);
   cout<<endl;
  
   cout<<toDecimal(head)<<endl;
   

   Node*revrese=NULL;
   revrese=Reverse(head);
   print(revrese);

}