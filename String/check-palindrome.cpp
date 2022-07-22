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
bool checkPalindrome(char ch[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(ch[s]!=ch[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}


int main(){
    char ch[10];
    cout<<"Enter the string:";
    cin>>ch;
    int a=getLength(ch);
    cout<<"Length of String:"<<a<<endl;
    vector<char>lower;
    lower=toLowercase(ch);
    for(int i=0;i<lower.size();i++){
        cout<<lower[i];
    }
    cout<<"Palindrome or Not Palindrome:";
    
    if(checkPalindrome(ch,a)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
}