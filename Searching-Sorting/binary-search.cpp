//implement Binary search
#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key){
   
   int start=0;
   int end=size-1;
   int mid=start+(end-start)/2;

   while(start<=end){
    if(arr[mid]==key){
       return mid;
    }
    else if(key<arr[mid]){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    
    mid=start+(end-start)/2;
   }
    return -1;
}
int main(){
  int even[6]={2,4,5,6,9,10};

  int index=BinarySearch(even,6,9);
  cout<<"Index of 12 is:"<<index;
}
