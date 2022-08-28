#include<bits/stdc++.h>
using namespace std;

long long int sqrt(long long int n){
    int s=0;
    unsigned int e=n;
    long long int ans=-1;
    long long int mid=s+(e-s)/2;

    while (s<=e)
    {
        long long int square=mid*mid;

        if(square==n){
            return mid;
        }
        else if(square<n){
            ans= mid;
            s=mid+1;

        }
        else{
            e=mid-1;
        }

        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<sqrt(n);
}
/*
423765
650.972
*/