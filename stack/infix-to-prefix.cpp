//Convert infix expression to prefix expression

#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
int prec(char c){
  if(c=='^'){ return 3;}
  else if(c=='*' || c=='/'){ return 2;}
  else if(c=='+' || c=='-'){ return 1;}
  else { return -1;}
}

string infixtoPrefix(string s)
{
  reverse(s.begin(),s.end());
  stack<char>st;
  string result;

  for(int i=0;i<s.length();i++){
      //if s[i] operand is then store it in result string 
    if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ){
      result+=s[i];
    }
    //if s[i]=) then push in stack
    else if(s[i]==')'){
      st.push(s[i]);
    }
    //if s[i]=( then check pop until we find )
    else if(s[i]=='('){
       while(!st.empty() && st.top()!=')'){
            result+=st.top();
            st.pop();
       }
       if(!st.empty()){
         st.pop();
       }
    }
    else{
      //check precedence of s[i] and st.top()
      while(!st.empty() && prec(st.top())>=prec(s[i])){
        result+=st.top();
        st.pop();
      }
      st.push(s[i]);
    }
    
  }
  
  while(!st.empty()){
    result+=st.top();
    st.pop();
  }

  reverse(result.begin(),result.end());
  return result;
}
int main(){
 string s1;
 cout<<"Enter the infix Expression:";
 getline(cin,s1);
 cout<<"\nPrefix Expression:";
 cout<<infixtoPrefix(s1);
}
/*
Enter the infix Expression:(a-b/c)*(a/k-l)
Prefix Expression:*-a/bc-/akl
*/