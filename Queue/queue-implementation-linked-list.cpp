// Implementation of Queue using linked list

#include<iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
};

class Queue{
  private:
    Node* front;
    Node* back;
  public:
    Queue(){
        front=NULL;
        back=NULL;
    }

    void Enqueue(int x){
        Node* temp= new Node();
        temp->data=x;
        temp->next=NULL;

        if(front==NULL){
             front=temp;
             back=temp;
             return;
        }
        back->next=temp;
        back=temp;
    }

    void Dequeue(){
        Node* temp=new Node();
        temp=front;

        if(front==NULL ){
            cout<<"No elements in queue"<<endl;
            return;
        }
        front=front->next;
        free(temp);
        
    }

    int peak(){
        if(front==NULL){
            return -1;
        }
        return front->data;
    }

    bool Empty(){
         if(front==NULL){
            return true;
        }
         return false;
    }
   
};

int main(){
    Queue q;
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);

    cout<<q.peak()<<endl;
    q.Dequeue();

    cout<<q.peak()<<endl;
    q.Dequeue();
    
    cout<<q.peak()<<endl;
    q.Dequeue();

    cout<<q.peak()<<endl;
    q.Dequeue();

    cout<<q.Empty();


}
/*
Output:
10
20
30
40
1
*/