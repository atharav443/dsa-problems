/*Insertion Sort: Similar as Playing Card,
example array={65,22,11,10,6,7,32,44}
1.Take First Element , Now check if the next element is smaller or 
bigger than the first element.
Round I:           65|22,11,10,6,7,32,44
As, 22 is less than 65 , we will put 22 at left to 65.
Round I:          22 65 | ,11,10,6,7,32,44
similarly now checking for 11 , 11 is smaller than 22 , we will put it in 0th index
Round II:         11 22 65 | 10 6 7 32 44 
Similarly, 
Round III:          10 11 22 65 | 6 7 32 44 
Round IV:           6 10 11 22 65 | 7 32 44
Round V:            6 7 10 11 22 65| 32 44 
Round VI :          6 7 10 11 22 32 65| 44 
Round VIII:         6 7 10 11 22 32 44 65|

T.C : O(n^2) , Best Case:O(n) ,Worst Case:O(n^2)
S.C: O(1)

insertion sort is an in-place sorting algorithm.
insertion sort is a stable sorting algorithm.

insertion sort is used when number of elements is small. It can also be useful 
when inputarray is almost sorted, only few elements are misplaced in complete 
big array.
*/

#include<iostream>
using namespace std;

int main(){
 int arr[8]={65,22,11,10,6,7,32,44};
 int n=8;

 for(int i=1;i<n;i++){
    int j=i-1;
    int key=arr[i];

    while(j>=0 && arr[j] > key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
 }
 cout<<"Sorted array:";
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
}