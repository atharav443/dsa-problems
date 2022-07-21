#include<iostream>
#include<vector>
using namespace std;
vector<int> Reversearray(vector<int>V){
   int s=0;
   int e=V.size()-1;

   while(s<=e){
    swap(V[s],V[e]);
    s++;
    e--;
   }

   return V;
}
vector<int>Reverseafter(vector<int>V,int m){
  int s=m+1;
   int e=V.size()-1;

   while(s<=e){
    swap(V[s],V[e]);
    s++;
    e--;
   }

   return V;
}
int main(){
  vector<int>arr{4 ,5 ,6, 7, 8};
  vector<int>b;
  int m=2;
  cout<<"Original Array:";
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  cout<<"Reversing the array:";
  b=Reversearray(arr);
  for(int i=0;i<b.size();i++){
    cout<<b[i]<<" ";
  }
  cout<<endl;

  cout<<"Reversing after 2 index:";
  b=Reverseafter(arr,m);
  for(int i=0;i<b.size();i++){
    cout<<b[i]<<" ";
  }
  }

/* 
Original Array:4 5 6 7 8 
Reversing the array:8 7 6 5 4
Reversing after 2 index:4 5 6 8 7
*/