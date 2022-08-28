#include<bits/stdc++.h>
using namespace std;

int stringCompress(vector<char> &chars){
 
  int i=0,ansindex=0;
  int n=chars.size();

  while(i<n){
    int j=i+1;

    while(j<n && chars[i]==chars[j]) j++;

    chars[ansindex++]=chars[i];

    int count=j-i;

    if(count>1){
        string cnt=to_string (count);

        for(char ch:cnt){
            chars[ansindex++]=ch;
        }
    }
    i=j;
  }

  return ansindex;


}

int main(){
    int n;
    cin>>n;
    char b;
   vector<char>V1;
    for(int i=0;i<n;i++){
        cin>>b;
        V1.push_back(b);
    }
    cout<<stringCompress(V1);
}