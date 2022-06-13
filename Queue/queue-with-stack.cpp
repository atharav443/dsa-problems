// Implementation of queue with stack

#include<iostream>
#include<stack>
using namespace std;

class Queue{
    stack<int>s1;
    stack<int>s2;

    public:

    void Enqueue(int x){
        s1.push(x);
    }
    int Dequeue(){

        if(s1.empty() && s2.empty()){
            cout<<"Queue is Empty";
            return -1;
        }

        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();

            }
        }
        int Peakvalue=s2.top();
        s2.pop();
        return Peakvalue;
        
    }

    bool Empty(){
        if(s1.empty() && s2.empty()){
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
    
    cout<<q.Dequeue()<<endl;
    cout<<q.Dequeue()<<endl;
    cout<<q.Dequeue()<<endl;
    cout<<q.Dequeue()<<endl;
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