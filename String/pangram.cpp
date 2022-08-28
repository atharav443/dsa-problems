#include <bits/stdc++.h>
using namespace std;
void pangram(string s1){
    
//    int t;
//    cin>>t;
//    cout<<"String:";
//     string s2;
//     getline(cin,s2);
  int b=0;
  int freq[26]={0};

  for(int i=0;i<s1.length();i++){
    if(s1[i]!=' '){
      freq[s1[i]-'a']++;
    }
      
  }

  for(int j=0;j<26;j++){
    if(freq[j]>0){
      b++;
    }
  }

  if(b==26) cout<<1;
  else cout<<0;
}
int main() {
    int t;
    cin>>t;
    cin.ignore();

    for(int k=0;k<t;k++){
    string s1;
    getline(cin,s1);
    pangram(s1); 
    cout<<endl;
    }
    
  return 0;
    
}

/*
2
abc def
0
abc defghi jklmnopqrstuvwxyz
1
*/
