#include<iostream>
#include<deque>
using namespace std;

int MaxminSubarray(int arr[],int n,int k){

  deque<int>maxi;
  deque<int>mini;
  
  
  for(int i=0;i<k;i++){
    while(!maxi.empty() && arr[maxi.back()]<=arr[i]){
        maxi.pop_back();
    }
    while(!mini.empty() && arr[mini.back()]>=arr[i]){
        mini.pop_back();
    }
    maxi.push_back(i);
    mini.push_back(i);
  }
  int num=0;
  for(int i=k;i<n;i++){

   num += arr[maxi.front()]+arr[mini.front()];
    //removal
    while(!maxi.empty() && i-maxi.front()>=k){
        maxi.pop_front();
    }
    while(!mini.empty() && i-mini.front()>=k){
        mini.pop_front();
    }
    
    //addition
    while(!maxi.empty() && arr[maxi.back()]<=arr[i]){
        maxi.pop_back();
    }
    while(!mini.empty() && arr[mini.back()]>=arr[i]){
        mini.pop_back();
    }
    maxi.push_back(i);
    mini.push_back(i);
    }
    //for last window;
    num += arr[maxi.front()]+arr[mini.front()];
    return num;
}

int main(){
    
    int arr[7]={2,5,-1,7,-3,-1,-2};
    int k=4;
    cout<<MaxminSubarray(arr,7,k);
}
/* 
Output:18
*/