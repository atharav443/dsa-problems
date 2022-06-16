// Implement K queues in array


#include<iostream>
using namespace std;

class Kqueue{
    public:
    int n;
    int k;
    int* arr;
    int* front;
    int* rear;
    int* next;
    int freespot;

    Kqueue(int n,int k){
        arr=new int [n];
        next=new int [n];
        for(int i=0;i<n;i++){
            next[i]=i+1;
        }
        next[n-1]=-1;
        front=new int [k];
        rear=new int [k];
        for(int i=0;i<k;i++){
            rear[i]=-1;
            front[i]=-1;
        }
        freespot=0;
    }

    void Enqueue(int data,int qn){
          //Overflow
          if(freespot==-1){
            cout<<"No space is present";
            return;
          }

         //Find the index;
         int index=freespot;

        //update freespot
         freespot=next[index];

         //check the first element
         if(front[qn-1]==-1){
            front[qn-1]=index;
         }
         else{
            //link the element with other element
            next[rear[qn-1]]=index;
         }

         //update next
         next[index]=-1;

         //update rear
         rear[qn-1]=index;

        //push element
         arr[index]=data;


    }

   int Dequeue(int qn){

        if(front[qn-1]==-1){
            cout<<"Queue Underflow"<<endl;
            return -1;
        }

        // find index
        int index=front[qn-1];

        //
        front[qn-1]=next[index];

        next[index]=freespot;
        
        //update freespot
        freespot=index;
        
        return arr[index];
    }

};
int main(){
    Kqueue q(10,3);
    q.Enqueue(12,1);
    q.Enqueue(15,1);
    q.Enqueue(20,2);
    q.Enqueue(25,1);
    cout<<q.Dequeue(1)<<endl;
    cout<<q.Dequeue(1)<<endl;
    cout<<q.Dequeue(2)<<endl;
    cout<<q.Dequeue(1)<<endl;
    cout<<q.Dequeue(1)<<endl;

}
/*
Output:
12
15
20
25
Queue Underflow-1

*/
