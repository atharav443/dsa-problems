#include<iostream>
using namespace std;
int Pivot(int arr[],int size){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
    
    
    
    }
int main(){
    int arr[6]={4,5,6,89,3,4};
    int element=Pivot(arr,6);
    cout<<"Index of pivot element:"<<element;
    
}
/*Output:
Index of pivot element:4
*/