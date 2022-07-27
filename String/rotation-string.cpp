#include<iostream>
#include<queue>
using namespace std;
bool checkRotation(string s1, string s2){
    int k=s2.size();
    queue<char>q1;
    queue<char>q2;

    for(int i=0;i<s1.size();i++){
        q1.push(s1[i]);
    }

    for(int j=0;j<s2.size();j++){
        q2.push(s2[j]);
    }
    
    while(k--){
        char ch= q2.front();
        q2.pop();
        q2.push(ch);

        if(q1==q2) return true;
    }

    return false;
    




    //  string temp=s1+s1;

    //  if(s1.length()!=s2.length()) return false;
    //  else{
    //     if(bool(temp.find(s2))){
    //         return true;
    //     }
    //     else{
    //         return false;
    //     }
    //  }
}


int main(){
    string s1="AACD";
    string s2="ACDA";
    

    if(checkRotation(s1,s2)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

//OutPut: Yes 