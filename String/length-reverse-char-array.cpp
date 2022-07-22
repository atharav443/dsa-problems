#include<iostream>
using namespace std;
void reverse(char name[],int length){
    int s=0;
    int e=length-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
    
}
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char ch[10];
    cin>>ch;
    cout<<"Name: "<<ch<<endl;
    cout<<"Length of String:"<<getLength(ch)<<endl;
    reverse(ch,getLength(ch));
    cout<<"Reversed String:"<<ch;

}