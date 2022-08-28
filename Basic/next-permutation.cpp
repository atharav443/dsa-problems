#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>&v){
    int n=v.size();
    int i=n-2;

    while(i>=0 && v[i]>=v[i+1]) i--;
   
   if(i>=0){
     int j=n-1;

     while(j>=0 && v[j]<=v[i])j--;
     swap(v[i],v[j]);
   }
   reverse(v.begin()+i+1,v.end());
}



int main(){
  vector<int>b;
  int a,n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a;
    b.push_back(a);
  }

  nextPermutation(b);
  for(int i=0;i<n;i++){
     cout<<b[i]<<" ";
  }

}