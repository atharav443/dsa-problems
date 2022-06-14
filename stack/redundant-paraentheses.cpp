#include<iostream>
#include<stack>
using namespace std;
bool Redundant(string s){
    stack<char>st;
    bool ans=false;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='+'|| s[i]=='-'|| s[i]=='*'|| s[i]=='/'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='('){
                ans=true;
                
            }
            if(st.top()=='+'|| st.top()=='-'|| st.top()=='*'|| st.top()=='/'){
                st.pop();
            }
            st.pop();
        }
        
    }
    return ans;
}
int main(){
   string s1;
   cout<<"Enter the expression:";
   cin>>s1;
   cout<<Redundant(s1);
}
