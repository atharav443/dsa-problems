/* Reverse first K elements from the queue

Input:
5 3
1 2 3 4 5

Output: 
3 2 1 4 5

Explanation: 
After reversing the given
input from the 3rd position the resultant
output will be 3 2 1 4 5.
*/

#include<iostream>
#include<queue>
#include<stack>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k) {
      
      stack<int>st;
      
      // Step 1: Push first k elements in stack 
      for(int i=0;i<k;i++){
        int val=q.front();
        q.pop();
        st.push(val);
      }
     
     // Step 2: pop out all elements in stack and push in queue 
     while(!st.empty()){
        int num=st.top();
        st.pop();
        q.push(num);
     }

     // Step 3: push back the first n-k elements of queue into the same queue 

     for(int i=0;i<q.size()-k;i++){
        q.push(q.front());
        q.pop();
     }
     
     return q;
}
int main(){
    queue<int>q;
    queue<int>q2;
    int a,b,k;
    cout<<"Enter the size:";
    cin>>a;
    cout<<"Enter the elements:";
    for(int i=0;i<a;i++){
        cin>>b;
        q.push(b);
    }
    cout<<"Enter the k value:";
    cin>>k;
    q2=modifyQueue(q,k);
    cout<<"Modified Queue :";
    for(int i=0;i<a;i++){
        cout<<q2.front()<<" ";
        q2.pop();
    }
}

/*
Output:
Enter the size:5
Enter the elements:1 2 3 4 5
Enter the k value:3
Modified Queue :3 2 1 4 5 
*/