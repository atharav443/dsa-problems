// Implementation of stack using queue with push costly method

#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

class Stack{
    queue<int>q;

    public:

    void push(int x){
        queue<int>temp;
        temp.push(x);

        while(!q.empty()){
            temp.push(q.front());
            q.pop();
        }

        swap(q,temp);
    }

    void pop(){
        if(q.empty()){
            cout<<"Stack is Empty"<<endl;
            return;
        } 
        q.pop();
    }

    int Top(){
        if(q.empty()){
            cout<<"Stack is Empty"<<endl;
            return -1;
        } 
        return q.front();
    }

    bool Empty(){
        return q.empty();
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
Stack is empty
-1
 */