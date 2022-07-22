/*
Given a string str. The task is to find 
the maximum occurring character in the 
string str. If more than one character 
occurs the maximum number of time then
print the lexicographically smaller character.

*/


#include<iostream>
using namespace std;

char getMaxOccuringChar(string str)
    {
       int freq[26]={0};
       int max=-1;
       char result;
       
       for(int i=0;i<str.length();i++) {freq[str[i]-'a']++;}
       
       for(int i=0;i<26;i++){
           
           if(max<freq[i]){
               max=freq[i];
               result=(char)(i +'a');
           }
       }
       return result;
    }

int main(){
    string s;
    cin>>s;
    cout<<"Maximum occuring character:";
    cout<<getMaxOccuringChar(s);
}
/*
atharav
Maximum occuring character:a
*/