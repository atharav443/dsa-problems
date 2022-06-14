//Check if the expression has balanced parantheses

#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValid(string s){
  int n = s.size();
        stack<char> st;
        
        for(int i=0; i<n; i++){
            // if opening bracket of any type just push in stack
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            
            //For closing bracket,check first if stack is not empty 
            else if(!st.empty()){
              //if closing bracket ) , then check if top of stack is ), then pop from stack
                if(s[i] == ')' && st.top() == '(')
                    st.pop();
              //if closing bracket } , then check if top of stack is { , then pop from stack
                else if(s[i] == '}' && st.top() == '{')
                    st.pop();
              //if closing bracket ] , then check if top of stack is [, then pop from stack
                else if(s[i] == ']' && st.top() == '[')
                    st.pop();
                // if corresponding opening is not present return false
                else 
                    return false;
            }
            //if stack is empty return false;
            else 
                return false;
        }
        //check if stack is empty ,if not return false;
        if(!st.empty()) return false;
        //stack is empty return true;
        return true;

}
int main()
{
  string s1;
  cout<<"Enter the String:";
  getline(cin,s1);
  if(isValid(s1)){
    cout<<"Valid String";
  }
  else{
      cout<<"Invalid String";
  }

}

/*
Output:
Enter the String:[})
Invalid String

Enter the String:[({})]
Valid String
*/