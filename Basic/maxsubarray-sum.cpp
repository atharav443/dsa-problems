//sliding window problem
//maxsubarray sum which is less than x

#include<iostream>
using namespace std;
void maxsubarraySum(int arr[],int n,int k,int x){
  
    int sum=0, ans=0;

    for(int i=0;i<k;i++){
        sum+=arr[i];
    }

    if(sum<x) ans=sum;
    
    for(int i=k;i<n;i++){
        sum=sum-arr[i-k];
        sum=sum+arr[i];

        if(sum<x){
            ans=max(ans,sum);
        }
    }
    
    cout<<ans;
}

int main(){

    int arr[]={7,5,4,6,8,9};
    int n=6;
    int k=3;
    int x=20;

    maxsubarraySum(arr,n,k,x);

}