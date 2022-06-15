/*

Given a queue of integers of even length, rearrange the elements by 
interleaving the first half of the queue with the second half of the queue.
 Only a stack can be used as an auxiliary space. Examples:

Input :  1 2 3 4
Output : 1 3 2 4

Input : 11 12 13 14 15 16 17 18 19 20
Output : 11 16 12 17 13 18 14 19 15 20


First Method : Using Queue
Second Method : Using Stack
*/

// Second method Method using Stack

#include<iostream>
#include<stack>
#include<queue>
using namespace std;

queue<int> interleaveElemenet(queue<int>q2)
{   
    stack<int>s;
    
    int a=q2.size();
    //a elements pushing in stack
    for(int i=0;i<a/2;i++){
        int val=q2.front();
        q2.pop();
        s.push(val);
    }
    //till stack is empty, pushing stack elements in the queue
    while(!s.empty()){
        int val=s.top();
        s.pop();
        q2.push(val);
    }
    //pushing the front  a elements of queue from back to same queue
     for(int i=0;i<a/2;i++){
        int val=q2.front();
        q2.pop();
        q2.push(val);
    }
    // Again pushing the first a elements in stack
    for(int i=0;i<a/2;i++){
        int val=q2.front();
        q2.pop();
        s.push(val);
    }
    // till stack is empty , pushing s.top and q.front in queue
    while(!s.empty()){
        int val=s.top();
        s.pop();
        q2.push(val);

        val=q2.front();
        q2.pop();
        q2.push(val);
    }
   
    return q2;
}




int main(){
    queue<int>q;
    queue<int>q1;
    int a,b;
   cout<<"Enter the size in even:";
   cin>>a;
   cout<<"Enter the elements:";
   for(int i=0;i<a;i++){
    cin>>b;
    q.push(b);
   }
   q1=interleaveElemenet(q);
   cout<<"Queue after Interleaving the first half:";
   for(int i=0;i<a;i++){
        cout<<q1.front()<<" ";
        q1.pop();
   }

}

/*
Output:
Enter the size in even:6
Enter the elements:1 2 3 4  5 6
Queue after Interleaving the first half:1 4 2 5 3 6
*/
