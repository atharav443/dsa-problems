// Find Middle Element in stack with recursive approach

#include<iostream>
#include<stack>
using namespace std;

int solve(stack<int>&inputStack,int count, int size){
    
    if(count==size/2){
        int nums2=inputStack.top();
        cout<<"Middle Element:"<<nums2;  
    }
    else{
    int num=inputStack.top();
    inputStack.pop();
     //recursive call
    solve(inputStack,count+1,size);
    inputStack.push(num);  
    }
    
}

void  deleteMiddle(stack<int>&inputStack, int N){	
 int count=0;   
 
 solve(inputStack,count,N);  

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
Enter the stack:1 23 4 5 6
Middle Element:4
*/