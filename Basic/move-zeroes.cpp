#include<iostream>
#include<vector>
using namespace std;
vector<int>moveZeroes(vector<int>ans){
    int nonzero=0;

    for(int i=0;i<ans.size();i++){
        if(ans[i]!=0){
            swap(ans[i],ans[nonzero]);
            nonzero++;
        }
    }

    return ans;

}
int main(){
    vector<int>V={0,2,3,0,0,45,56};

    V=moveZeroes(V);
    cout<<"Output Array:";
    for(int i=0;i<V.size();i++){
        cout<<V[i]<<" ";
    }
}
/*
Output Array:2 3 45 56 0 0 0
*/