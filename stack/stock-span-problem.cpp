/*
The span of stock price today is the maximu number of consecutive days for which price 
was less than or equal to today's price.
Find span of stocks for all days.
*/

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> stockSpan(vector<int>prices){
        vector<int>ans;
        stack<pair<int,int>>s;            //stack with pairs

        for(auto price:prices){
            int days=1;
 //condition for checking the top price of stack is less than that of prices,then adding days
            while(!s.empty() && s.top().first <=price){
                  days+=s.top().second;
                  s.pop();
            }
            s.push({price,days});     
            ans.push_back(days);
        }
        return ans;
}


int main(){
    vector<int> V;
    vector<int>ans;
    int a,b;
    cout<<"Enter the size :";
    cin>>a;
    cout<<"\nEnter the prices:";
    for(int i=0;i<a;i++){
        cin>>b;
        V.push_back(b);
    }
    ans=stockSpan(V);
    cout<<"\nStock Span:";
     for(int i=0;i<a;i++){
        cout<<ans[i]<<" ";
    }
}

/*
Output:
Enter the size :7

Enter the prices:100 80 90 50 40 30 20

Stock Span:1 1 2 1 1 1 1

*/