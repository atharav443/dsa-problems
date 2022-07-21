/* Bubble Sort:Sort the last element in first round, similarly 
second last element in second round.
arr= 4 6 7 1  29 32 11 33

Round I : 4  6  1  7 29 11 32 | 33
Round II: 4  1  6  7 11 29 | 32 33
Round III : 1 4 6 7  11 |29 32 33
Round IV: 1 4 6 7 | 11 29 32 33
Round V: 1 4 6 | 7  11 29 32 33
Round VI : 1 4 | 6 7  11 29 32 33
Round VII:1 | 4 6 7  11 29 32 33

Array is sorted : 1 4 6 7  11 29 32 33

T.C : 
   Best Case: O(n)
   Worst Case: O(n^2)
S.C: O(n)
*/



#include<iostream>
using namespace std;

int main(){
    int arr[8]={4,6,7,1,29,32,11,33};
    int n=8;
    for(int i=1;i<n;i++){
        //for round 1 to n-1
        bool swapped=false;
        for(int j=0;j<n-1;j++){
            //process element until (n-1)th index
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            //already sorted
            break;
        }
    }
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

/*
Output:
  Sorted array: 1 4 6 7 11 29 32 33 
*/