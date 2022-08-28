#include<iostream>
using namespace std;

void checkoddorEven(int a){

    if(a&1==1){
        cout<<"Odd";
    }
    else{
        cout<<"Even";
    }
}

int main(){
    int i;
    cin>>i;

    checkoddorEven(i);
}