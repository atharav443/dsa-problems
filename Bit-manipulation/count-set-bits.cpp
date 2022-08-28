#include<iostream>
using namespace std;

//1. Naive approach
// int countSetBits(int n){
//      int cnt=0;
//      while(n){
//         cnt+=n&1;
//         n=n>>1;
//      }
//      return cnt;
// }

// 2. Recursive Approach

int countsetBits(int n){
    if(n==0) return 0;

    return (n&1)+countsetBits(n>>1);
}


int main(){
    int a;
    cout<<"Enter the Number:";
    cin>>a;
    cout<<countsetBits(a);
}