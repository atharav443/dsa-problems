#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        
        for(int i=1;i<n;i++){            
            if(nums[i-1]>nums[i]) count++;
        }
        if(nums[n-1]>nums[0]) count++;  // compare last element of array with first element
        
        if(count==0) count++;   // condition for elements in array are similar
        return count==1;
    }


int main(){
   vector<int>V{3,4,5,1,2};
   if(check(V)){
    cout<<"true";
   }
   else{
    cout<<"false";
   }
   
}
/*
Output:true
*/