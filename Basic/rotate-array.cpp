#include<iostream>
#include<vector>
using namespace std;

 void rotate(vector<int>& nums, int k) {
      vector<int>temp(nums.size());
        
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
        }
        nums=temp;
    }

int main(){
    vector<int>V{1,2,3,4,5,6,7};
    int k=3;
    vector<int>temp;
    rotate(V,k);
    cout<<"Rotated array:";
    for(int i=0;i<7;i++){
        cout<<V[i]<<" ";
    }
}
/*
Rotated array:5 6 7 1 2 3 4 
*/