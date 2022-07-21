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