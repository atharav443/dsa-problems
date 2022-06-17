
#include<iostream>
#include<stack>
using namespace std;
stack<int> solve(stack<int>& s,int x){
    
    if(s.empty()){
        s.push(x);
       
    }
    else{
    int num=s.top();
    s.pop();
    solve(s,x);
    s.push(num);
    }
    return s;
}

void pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int>s1;
   s1=solve(myStack,x);
    
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
}
int main(){
    stack<int>st,st2;
    int a,b,c,d;
    cout<<"Enter the size:";
    cin>>a;
    cout<<"Enter the stack:";
    for(int i=0;i<a;i++){
        cin>>b;
        st.push(b);
    }
    cout<<"Enter the number to push:";
    cin>>c;
    pushAtBottom(st,c);
    
}
/*
Output:
Enter the size:5
Enter the stack:1 2 3 4 5
Enter the number to push:6
5 4 3 2 1 6 
*/