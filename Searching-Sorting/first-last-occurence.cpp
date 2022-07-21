#include<iostream>
using namespace std;
int firstOcc(int arr[],int size,int key){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
     mid=s+(e-s)/2;

    }
     return ans;
}

int lastOcc(int arr[],int size,int key){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
   
   int arr[6]={2,4,5,5,7,8};
   int index=firstOcc(arr,6,5);
   cout<<"First Occurence of 9 :"<<index<<endl;
   int Lastindex=lastOcc(arr,6,5);
   cout<<"Last Occurence of 9 :"<<Lastindex;
}
/* Output:
First Occurence of 9:2
Last Occurence of 9 :3
*/