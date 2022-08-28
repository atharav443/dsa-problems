#include<iostream>
#include<vector>
using namespace std;

bool checkMod10(int a[],int m){
  vector<int>V;
  int temp,temp1;
 for(int i=0;i<m;i++){
   
    temp=a[i]+a[i]%10;

    if(i==0){
        temp1=temp;
    }

    if(temp!=temp1) return false;
    }
  return true;
}

int main(){
    int n;
    int arr[100];
    
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<checkMod10(arr,n);

    
}