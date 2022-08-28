#include<bits/stdc++.h>
using namespace std;
 int firstUnique(string s1){
    unordered_map<char,int>un;

  for(int i=0;i<s1.size();i++){
    un[s1[i]]++;
  }

  for(int i=0;i<s1.size();i++){

    if(un[s1[i]]==1) return i;
  }
  return -1;
 }
int main(){
  
  string s1="eeeea";

  cout<<firstUnique(s1);
}