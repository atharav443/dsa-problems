
/*

Question :Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.A subarray is a contiguous part of an array. 

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

*/



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

/*
  Output:
  Enter the size:4
  Enter the elements:4 -1 2 1 
  Maximum Sum of Subarray:6
  
*/