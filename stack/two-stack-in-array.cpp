// Implement two stack in array

#include<iostream>
using namespace std;


class TwoStack {
        int * arr;
        int top1;
        int top2;
        int size;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        arr=new int [size];
        top1=-1;
        top2=size;
        
    }
    
    // Push in stack 1.
    void push1(int num) {
        
        if(top2-top1>1){
            top1++;
            arr[top1]=num;
        }
        else{
            cout<<"Stack Overflow";
        }
    }

    // Push in stack 2.
    void push2(int num) {
       if(top2-top1>1){
            top2--;
            arr[top2]=num;
        }
        else{
            cout<<"Stack Overflow";
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
       if(top2<size){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
};
int main(){
    TwoStack s(10);
    s.push1(12);
    s.push1(16);
    s.push1(18);
    cout<<s.pop1()<<endl;
    cout<<s.pop1()<<endl;
    cout<<s.pop1()<<endl;
    s.push2(10);
    cout<<s.pop2()<<endl;
    cout<<s.pop2();

}
/*
Output:
18
16
12
10
-1
*/