// Find the xor of 1 to N .
/*Method 2 (Efficient method) : 
1- Find the remainder of n by moduling it with 4. 
2- If rem = 0, then XOR will be same as n. 
3- If rem = 1, then XOR will be 1. 
4- If rem = 2, then XOR will be n+1. 
5- If rem = 3 ,then XOR will be 0.
*/

#include<iostream>
using namespace std;
int findXor(int n){

    if(n%4==0){
        return n;
    }
    if(n%4==1){
        return 1;
    }
    if(n%4==2){
        return n+1;
    }
    if(n%4==3){
        return 0;
    }
}

int main(){
    int n;
    cin>>n;

    cout<<"Xor:"<<findXor(n);
}