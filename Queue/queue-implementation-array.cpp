// Implementation of Queue using arrays

#include<iostream>
using namespace std;
#define n 20
class Queue
{
private:
    int* arr;
    int front;
    int back;
public:
    Queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    };

    void Enqueue(int x){
       if(back==n-1){
           cout<<"Queue Overflow"<<endl;
           return;

       }
       back++;
       arr[back]=x;
       if(front==-1){
        front++;
       }
    }

    void Dequeue(){
        if(front==-1 || front>back){
            cout<<"No element in queue"<<endl;
            return;
        }
        front++;
    }
    
    int peak(){
        if(front==-1 || front>back){  
            return -1; 
        }
        return arr[front];
    }

    bool Empty(){
        if(front==-1 || front>back){  
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

     cout<<q.Empty()<<endl;

}
/*
Output:
10
20
30
40
1
*/