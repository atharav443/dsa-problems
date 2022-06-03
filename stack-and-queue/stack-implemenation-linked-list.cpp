// implementation of stack using Linked list

#include<iostream>
using namespace std;

class Node{
  public:
   int data;
   Node* next;
};

class Stack{
    
    Node* top=NULL;
    
    public:
     
    void push(int x){
      Node* temp=new Node();
      temp->data=x;
      temp->next=top;
      top=temp;
    }

    void pop(){
      if(top==NULL){
        cout<<"Stack is empty"<<endl;
        return;
      }
      Node* temp=new Node();
      temp=top;
      top=top->next;
      free(temp);
    }

    int Top(){
      if(top==NULL){
        cout<<"Stack is empty"<<endl;
        return -1;
      }
      return top->data;
    }

    bool Empty(){
      return top==NULL;
    }
};

int main(){
   Stack st;
    st.push(3);
    st.push(5);
    st.push(10);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Empty()<<endl;
    cout<<st.Top();
}
