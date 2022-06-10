//Evalution of prefix expression
#include<iostream>
#include<stack>
#include<cmath>
#include<string>
using namespace std;

int prefixEvaluation(string s1){
	
	stack<int>st;
	
	for(int i=s1.length()-1;i>=0;i--){
		if(s1[i]>='0' && s1[i]<='9'){
			st.push(s1[i]-'0');
		}
		else{
			int op1=st.top();
			st.pop();
			int op2=st.top();
			st.pop();
			
			switch(s1[i])
			{
				case '+':
					st.push(op1+op2);
					break;
					
				case '-':
					st.push(op1-op2);
					break;
					
				case '*':
					st.push(op1*op2);
					break;
					
				case '/':
					st.push(op1/op2);
					break;
					
				case '^':
					st.push(pow(op1,op2));
					break;
					
				
					
			}
		}
	}
	return st.top();
}

int main(){
	string s;
	cout<<"Enteer the prefix expression:";
	getline(cin,s);
	
	cout<<prefixEvaluation(s);
	
}
/*
Enteer the prefix expression:-+8/632
8
*/