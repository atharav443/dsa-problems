#include<iostream>
#include<unordered_map>
using namespace std;

int romanToInt(string s){
        unordered_map<char,int> value;
        value['I']=1;
        value['V']=5;
        value['X']=10;
        value['L']=50;
        value['C']=100;
        value['D']=500;
        value['M']=1000;
        int n=s.length();
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(value[s[i]]>=value[s[i+1]]){
                ans=ans+value[s[i]];
            }
            else{
                ans=ans-value[s[i]];
            }
        }
         ans=ans+value[s[n-1]];
        return ans;
    }


    int main(){
        string s1;
        cout<<"Enter the roman number:";
        cin>>s1;

        int ans=romanToInt(s1);
        cout<<"Integer:"<<ans;
    }