#include<iostream>
using namespace std;

int ArithmaticPro(int first_term,int d,int find_term){

int ans;

ans=first_term+(find_term-1)*d;
return ans;

}

int main(){

  int first_term;
  cin>>first_term;
  int d;
  cin>>d;
  int find_term;
  cin>>find_term;
  cout<<"The "<<d<<"th term in AP:";
  cout<<ArithmaticPro(first_term,d,find_term);

}