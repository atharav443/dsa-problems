//Approach 1: By storing the rem

#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int n,i=0;
    cin>>n;

   int arr[1000];
   
    while(n>0){
        arr[i]=n%2;
        n=n/2;
        i++;
        }
 
        for(int j=i-1;j>=0;j--){
            cout<<arr[j];
        }
}


//Approach 2: By bitwise operators

/*
int main(){
    int n;
    cin>>n;

    int ans=0;
    int i=0;

    while(n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;
}
*/

