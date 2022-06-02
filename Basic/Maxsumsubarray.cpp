#include <iostream>
#include<vector>
using namespace std;
int MaxSumSubarray(vector<int> V){
  int n=V.size();
  int curr_sum=V[0];
  int max_so_far=V[0];
  
  for(int i=1;i<n;i++){
    curr_sum=max(V[i],curr_sum+V[i]);
    max_so_far=max(max_so_far,curr_sum);
  }
  return max_so_far;
  }


int main(){
  int a,b,c;
  vector<int>elems;
  cout<<"Enter the size:";
  cin>>a;
  cout<<"\nEnter the elements:";
  for(int i=0;i<a;i++){
     cin>>b;
     elems.push_back(b);
  }
  c=MaxSumSubarray(elems);
  cout<<"\nMaximum Sum of Subarray:"<<c;
}