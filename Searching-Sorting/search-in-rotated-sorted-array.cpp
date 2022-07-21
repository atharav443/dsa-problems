#include<iostream>
#include<vector>
using namespace std;

int Pivot(vector<int>& arr,int size){
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
int BinarySearch(vector<int>& arr,int start,int end,int size,int key){
   
 
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


int findPosition(vector<int>& arr, int n, int k)
{
   
    int pivot=Pivot(arr,n);
    
    if(k>=arr[pivot] && k<=arr[n-1]){
        return BinarySearch(arr,pivot,n-1,n,k);
    }
    else{
        return BinarySearch(arr,0,pivot-1,n,k);
    }
}
int main(){
    vector<int>arr{2,3,4,5,6,7,1};
    
    int index=findPosition(arr,7,1);
    cout<<"Index of 2 in rotated sorted array:"<<index;
}
/*
Output:
Index of 2 in rotated sorted array:6
*/