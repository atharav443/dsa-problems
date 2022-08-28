#include<iostream>
using namespace std;
string replaceSpaces(string s1){
    string temp="";
    for(int i=0;i<s1.length();i++){
       if(s1[i]==' '){
         temp.push_back('@');
         temp.push_back('4');
         temp.push_back('0');
       }
       else{
        temp.push_back(s1[i]);
       }
    }
    return temp;
}
int main(){
   string s1;
   getline(cin,s1);
   string s2;
   s2=replaceSpaces(s1);
   cout<<s2;
}