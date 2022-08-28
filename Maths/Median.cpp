#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int n;
    cout<<"Number of given set:";
    cin>>n;
   int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    cout<<"Median of given set:";
    if(n%2!=0){
        int mid=(n-1)/2;
        cout<<arr[mid];
    }
    else{
        float a=arr[(n-1)/2]+arr[((n-1)/2)+1];
        cout<<a/2;
    }



}