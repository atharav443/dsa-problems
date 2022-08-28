#include<bits/stdc++.h>
using namespace std;


int main(){
    
   string s1="geeks for geeks";

   unordered_map<char,int> map{0};

   for(int i=0;i<s1.size();i++){
      if(s1[i]==' ') continue;
      map[s1[i]]++;
    }

    unordered_map<char,int>::iterator itr;

    for(itr=map.begin();itr!=map.end();itr++){
       cout<<itr->first<<" "<<itr->second<<endl;
    }
}