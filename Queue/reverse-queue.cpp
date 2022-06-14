// reverse the elements in queue 

#include<iostream>
#include<stack>
#include<queue>
using namespace std;
queue<int>Reverse(queue<int>q3){
   stack<int>st;

   while(!q3.empty()){
     int num=q3.front();
     q3.pop();
     st.push(num);
   }

   while(!st.empty()){
    int num= st.top();
    st.pop();
    q3.push(num);
   }

   return q3;
}
int main(){
    queue<int>q1;
    queue<int>q2;

    int b,a;
    cout<<"Enter the size:";
    cin>>a;
    cout<<"\nEnter the elements in queue:";
    for(int i=0;i<a;i++){
        cin>>b;
        q1.push(b);
    }
    q2=Reverse(q1);
    cout<<"\nReversed Queue:";
    for(int i=0;i<a;i++){
       cout<< q2.front()<<" ";
       q2.pop();
    }
}
/*
Output:
Enter the size:3

Enter the elements in queue:1 2 3

Reversed Queue:3 2 1
*/