#include<iostream>
using namespace std;

int GCD(int a,int b){
    if(a==0) return b;

    return GCD(b%a,a);
}


int main(){
    int a,b;
    cin>>a>>b;

    int c=GCD(a,b);
    cout<<c<<" ";
    int lcm=(a*b)/c;
    cout<<lcm;
}