#include<iostream>
using namespace std;

bool validcharacter(char ch){

    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || (ch>=1 && ch<=9)){
        return 1;
    }
    else{
        return 0;
    }
}

string
bool checkPalindrome(string s){

    int s1=0; 
    int e=s.length()-1;

    while(s1<=e){
        if(s[s1]!=s[e]){
            return 0; 
        }
        else{
            s1++;
            e--;
        }
        return 1;

    }
}



