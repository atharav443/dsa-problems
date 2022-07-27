#include<iostream>
using namespace std;
void printVowels(string ch){
  
    string temp="";
   for(int i=0;ch[i]!='\0';i++){
    
        if((ch[i]=='A' || ch[i]=='a') || (ch[i]=='E' || ch[i]=='e') 
        || (ch[i]=='I' || ch[i]=='i') || (ch[i]=='O' || ch[i]=='o') ||
         (ch[i]=='U' || ch[i]=='u')){
           temp=temp+ch[i];
   }
   } 

   for(int i=0;temp[i]!='\0';i++){
    cout<<temp[i];
   } 

}


int main(){
  
  string s1;
  cin>>s1;
  
  printVowels(s1);
}

// Output: atharav
//  aaa






