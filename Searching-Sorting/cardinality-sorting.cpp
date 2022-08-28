#include<bits/stdc++.h>
using namespace std;

int countone(int n)
    {
        int count{};
        while(n)
        {
            if((n&1)==1)
            {
                count++;
            }
            n>>=1;
        }
        return count;
    }
    
    vector<int> sortByBits(vector<int>& arr)
    {   int n=arr.size();
        vector<int>ans;
        map<int,vector<int>>m;
        
        for(int i=0;i<n;i++)
        {
            
            m[countone(arr[i])].push_back(arr[i]);
        }
        
        for(auto i:m)
        {
            sort(i.second.begin(),i.second.end());

            for(auto j:i.second)
            {
                ans.push_back(j);
            }
        }
        return ans;
    }
    



int main(){
    vector<int>V1,ans;
    int b,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>b;
        V1.push_back(b);
    }
    
    ans=sortByBits(V1);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}