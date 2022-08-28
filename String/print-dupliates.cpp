#include<iostream>
#include<unordered_map>
using namespace std;
void printDuplicates(string s1){
    string temp="";
    unordered_map<char,int>map;

    for(int i=0;i<s1.length();i++){
        map[s1[i]]++;
    }
    
    for(char i='a';i<'z';i++){
        if(map[i]>1){
            cout<<i<<"="<<map[i]<<endl;
        }
    }
    }


int main(){
   string s1;
   cin>>s1;
   string s2;
   printDuplicates(s1);
   

}
/* Output:
parrotp
p=2
r=2
*/