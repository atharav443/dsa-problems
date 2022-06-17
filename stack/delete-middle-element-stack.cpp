//Delete middle element of stack and return the stack
#include<iostream>
#include<stack>
using namespace std;

stack<int> solve(stack<int>&inputStack,int count, int size){
    
    if(count==size/2){
       
        inputStack.pop();   
    }
    else{
    int num=inputStack.top();
    inputStack.pop();
     //recursive call
    solve(inputStack,count+1,size);
    inputStack.push(num);  
    }
    return inputStack; 
}

void  deleteMiddle(stack<int>&inputStack, int N){	
 int count=0;   
 stack<int>s1;
 s1=solve(inputStack,count,N);  
 cout<<"After deleting the middle element of stack:";
 while(!s1.empty()){
    cout<<s1.top()<<" ";
    s1.pop();
 }
}

int main(){
   stack<int>st;
   int n,b,a;
   cout<<"Enter the size:";
   cin>>n;
   
  cout<<"Enter the stack:";
   for(int i=0;i<n;i++){
    cin>>b;
    st.push(b);
   }
   deleteMiddle(st,n);
   
} 
/*
Output:
Enter the size:5
Enter the stack:1 2 3 4 5
After deleting the middle element of stack:5 4 2 1 
*/