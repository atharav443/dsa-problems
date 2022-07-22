#include<iostream>
#include<vector>
using namespace std;

vector<char> toLowercase(char ch[]){
    vector<char>V;
    for(int i=0;ch[i]!='\0';i++){
       if(ch[i]>='a' && ch[i]<='z'){
          V.push_back(ch[i]);
       }
       else{
         char temp=ch[i]-'A'+'a';
         V.push_back(temp);
         
       }
    }
    return V;
    
}

int main(){
    char ch[10];
    cout<<"Enter the string:";
    cin>>ch;
    vector<char>lower;
    lower=toLowercase(ch);
    cout<<"String in lower case:";
    for(int i=0;i<lower.size();i++){
        cout<<lower[i];
    }
}