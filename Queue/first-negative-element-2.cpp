/*
First negative integer in every window of size k 
Easy Accuracy: 54.27% Submissions: 33968 Points: 2
Given an array A[] of size N and a positive integer K,
find the first negative integer for each and every 
window(contiguous subarray) of size K.

 

Example 1:

Input : 
N = 5
A[] = {-8, 2, 3, -6, 10}
K = 2
Output : 
-8 0 -6 -6
Explanation :
First negative integer for each window of size k
{-8, 2} = -8
{2, 3} = 0 (does not contain a negative integer)
{3, -6} = -6
{-6, 10} = -6
*/
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<int> printFirstNegativeInteger( int A[],
 int N, int K) {
 
   queue<int>dq;
   vector<int> ans;
   
   //push first k sized window in deque
   for(int i=0;i<K;i++){
    if(A[i]<0) dq.push(i);
   }
   
   //store negative element in ans
   if(dq.size()>0){
     ans.push_back(A[dq.front()]);
   }
   else{
      ans.push_back(0);
   }
 
   for(int i=K;i<N;i++){

    // removal 
    if(!dq.empty() && i-dq.front()>=K){
        dq.pop();
    }

    // addition
    if(A[i]<0){
        ans.push_back(i);
    }

    // store
    if(dq.size()>0){
     ans.push_back(A[dq.front()]);
   }
   else{
      ans.push_back(0);
   }
   }
   int n=ans.size();
   for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
   return ans;
 }


int main(){
   
    int n,arr1[n],k;
    vector<int>A;
    cout<<"Enter the size:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){

        cin>>arr1[i];
    }
    cout<<"Enter the window size:";
    cin>>k;
    A=printFirstNegativeInteger(arr1,n,k);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}