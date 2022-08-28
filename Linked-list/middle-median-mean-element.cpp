#include<iostream>
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


void insertatHead(Node* &head,int d){
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;
}

void insertatTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}

void Insertion(Node* &head,Node* &tail,int d,int position){
    if(position==1){
        insertatHead(head,d);
        return;
    }
    
    Node* temp=head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

   while(temp->next==NULL){
    insertatTail(tail,d);
    return;
   } 

   Node* nodeinsert=new Node(d);
   nodeinsert->next=temp->next;
   temp->next=nodeinsert;

}

void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int middleElement(Node* head){

    if(head==NULL){
        return -1;
    }

    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow->data;
}

float Mean(Node* head, int size){
    float sum=0;

    Node* temp=head;

    while(temp!=NULL){
        sum+=temp->data;
        temp=temp->next;
    }

    return (sum/size);
}


float Median(Node* head,int size){
  
    if(head==NULL) return -1;
    
    Node* curr=NULL;
    Node* slow=head;
    Node* fast=head;
   

    while(fast!=NULL && fast->next!=NULL){
       curr=slow;
       slow=slow->next;
       fast=fast->next->next;

    }

    if(size%2==0){
       float ans= slow->data + curr->data;
       return (ans/2);
    }
    else {
        return slow->data;
    }
}

int Mode(Node* head,int size){
    unordered_map<int,int>mp;
    Node* temp=head;

   while(temp!=NULL){
    mp[temp->data]++;
    temp=temp->next;
   }

   int max_count=0,res=-1;

   for (auto i : mp) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
 
    return res;



}

int main(){
    int size,a,b;

    cout<<"Enter the size:";
    cin>>size;

    cout<<"Enter the elements:";
    cin>>a;

    Node* node1=new Node(a);
    Node* head=node1;
    Node* tail=node1;

    for(int i=2;i<=size;i++){
        cin>>b;
        Insertion(head,tail,b,i);
    }

    cout<<"Linked List:";
    print(head);
    cout<<endl;
    
    cout<<"Middle Element:";
    cout<<middleElement(head)<<endl;
    
    cout<<"Mean:";
    cout<<Mean(head,size)<<endl;

    cout<<"Median:";
    cout<<Median(head,size)<<endl;
    
    cout<<"Mode:";
    cout<<Mode(head,size)<<endl;
    return 0;

}