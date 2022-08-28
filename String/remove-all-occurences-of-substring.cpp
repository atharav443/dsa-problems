#include<iostream>
using namespace std;
string removeOccurences(string s1,string s2){

    while(s1.length()!=0 && s1.find(s2)<s1.length()){
        s1.erase(s1.find(s2),s2.length());
    }
    return s1;
}

int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;

    string s3=removeOccurences(s1,s2);
    cout<<s3;
}
/*
Output:
daabcbaabcbc
abc
dab
*/