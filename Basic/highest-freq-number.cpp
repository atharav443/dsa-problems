#include<bits/stdc++.h>
using namespace std;

int MostNumber(int arr[],int a){
    unordered_map<int,int>mp;
    int max_count=0,res=-1;

    for(int i=0;i<a;i++){
        mp[arr[i]]++;
    }
    
    for(auto i:mp){
        if(max_count<i.second){
            
            res=i.first;
            max_count=i.second;
        }
    }
    
   return res;

}

int main(){
    int arr[]={1,1,5,66,74,13,1};
    int n=7;

    cout<<MostNumber(arr,n);
}




