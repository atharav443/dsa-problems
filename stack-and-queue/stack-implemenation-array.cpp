// Implementation of Stack using array

#include<iostream>
using namespace std;
#define n 100

//class for stack operations: push,pop,top,empty
class Stack{
    int* arr;
    int top;

    public:

     Stack(){
       arr=new int[n];
       top=-1;
     }

     void push(int x){
       if(top==n-1){
         cout<<"Stack Overflow";
         return;
       }
       top++;
       arr[top]=x;
     }

     void pop(){
       if(top==-1){
         cout<<"Stack is empty"<<endl;
         return;
       }
       top--;
     }

     int Top(){
       if(top==-1){
         cout<<"Stack is Empty"<<endl;
         return -1;
       }
       return arr[top];
     }

     bool Empty(){
       return top=-1;
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

/*
Output:
10
5
3
1
-1
 */