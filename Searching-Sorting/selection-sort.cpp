/* Selection Sort= Select Minimum Element for the current Position ((n-1) rounds)
   Example Array={3,9,2,1,7,7,4,5}
   Round I= 
   
   T.C = O(N^2) , S.C= O(1)
   UseCase :  Used when array is small in size, used when space is limited
*/

#include<iostream>
using namespace std;

int main(){
    int arr[8]={3,9,2,1,7,7,4,5};

    for(int i=0;i<8;i++){
        int minIndex=i;
        for(int j=i+1;j<8;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    cout<<"Sorted Array is: ";
    for(int k=0;k<8;k++){
      cout<<arr[k]<<" ";
    }
}
/*
Sorted Array is: 1 2 3 4 5 7 7 9 
*/