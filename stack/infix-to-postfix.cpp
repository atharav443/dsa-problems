//Convert infix expression to postfix expression

#include<iostream>
#include<string>
#include<stack>
using namespace std;
//function which returns precedence order
int prec(char c){
  if(c=='^') {
    return 3;
  }
  else if(c=='*' || c=='/') {
    return 2;
  }
  else if(c=='+' || c=='-') {
    return 1;
  }
  else {
    return -1;
  }
}

string infixtoPostfix(string s){
      stack<char>st;
      string res;

      for(int i=0;i<s.length();i++){
        //if s[i] operand is then store it in result string 
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
          res+=s[i];
        }
        //if s[i] is ( then push it in stack 
        else if(s[i]=='('){
          st.push(s[i]);}
        //if s[i] is ) then pop till top of stack is (
        else if(s[i]==')'){
          while(!st.empty() && st.top()!='('){
            res+=st.top();
            st.pop();
          }
          // to pop then ( remaining after while condition
          if(!st.empty()){
            st.pop();
          }
        }
      // if s[i] is operator, check precedence of s[i]
        else{
          // add top of stack to result if precedence if more than s[i] and then pop 
          while(!st.empty() && prec(st.top())>prec(s[i])){
            res+=st.top();
            st.pop();
          }
          //s[i] has more precedence then push to stack
          st.push(s[i]);
        }
      }
      //if stack is not empty add to result
      while(!st.empty()){
        res+=st.top();
        st.pop();
      }
      return res;
}


int main(){
   string a;
   cout<<"Enter the infix expression:";
   getline(cin,a);
   cout<<"\nThe Postfix expression:";
   cout<<infixtoPostfix(a);
}
/*
Enter the infix expression:(a-b/c)*(a/k-l)
The Postfix expression:abc/-ak/l-*
*/