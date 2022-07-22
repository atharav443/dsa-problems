#include<iostream>
using namespace std;
bool isPresent(int arr[3][3],int n){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==n){
                return 1;
            }
        }
    }
    return 0;
}

int PrintSum(int arr[3][3]){
   int maxsum=0;
   for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
           sum+=arr[row][col];
        }
        maxsum=max(maxsum,sum);
    }
    return maxsum;
}
int main(){
    int arr[3][3];

    cout<<"Enter the matrix:";
    //taking row wise input
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    
    int n;
    cout<<"Enter the element to search:";
    cin>>n;

    if(isPresent(arr,n)){
      cout<<"Element present in matrix";
    }
    else{
        cout<<"Element is not present in matrix";
    }
    cout<<endl;
    cout<<"Row wise largest sum:"<<PrintSum(arr);
}