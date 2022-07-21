#include<iostream>
using namespace std;
long long int sqrtN( int N)
{
        int s = 0;
        int e = N;
        long long int mid = s + (e-s)/2;
        
        int ans = -1;
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == N)
                return mid;
            
            if(square < N){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid-1 ;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    
}
double morePrecision(int n,int precision,int tempSoln){
    double factor=1;
    double ans=tempSoln;
    for(int i=0;i<precision;i++){
        factor=factor/10;

        for(double j=ans;j*j<n;j=j+factor){
        ans=j;}

    }
    return ans;
}
int main(){
   int a;
   cout<<"Enter the Number:"<<endl;

   cin>>a;
   int TempSoln=sqrtN(a);
   cout<<"Square root of "<<a<<":" << morePrecision(a,3,TempSoln);
}
/*
Output:
Enter the Number:
37
Square root of 37:6.082
*/
