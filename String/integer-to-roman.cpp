#include<iostream>
using namespace std;


string intToRoman(int a){
   string m[]={"","M","MM","MMM","MMMM","MMMMM"};
   string c[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
   string x[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
   string i[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};

    string thousands = m[a / 1000];
    string hundreds = c[(a% 1000) / 100];
    string tens = x[(a % 100) / 10];
    string ones = i[a % 10];
  
    string ans = thousands + hundreds + tens + ones;
  
    return ans;

}

int main(){
   int a;
   cin>>a;
   string s1=intToRoman(a);
   cout<<intToRoman(a);
}
/*
OUTPUT:
99
XCIX
*/