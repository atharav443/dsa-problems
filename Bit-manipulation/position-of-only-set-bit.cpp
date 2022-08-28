#include<iostream>
using namespace std;

bool poweroftwo(int x){
    return x && (!(x & (x-1)));
}

int positionsetbits(int n){
    if(!poweroftwo(n)) return -1;

    int cnt=0;

    while(n){
      n=n>>1;
      cnt++;
     }

     return cnt;

}

int main(){
    int a;
    cin>>a;
    cout<<positionsetbits(a);
}