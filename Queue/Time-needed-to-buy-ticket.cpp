/*
There are n people in a line queuing to buy tickets, where the 0th person is at the front of the line and the 
(n - 1)th person is at the back of the line.

You are given a 0-indexed integer array tickets of length n where the number of tickets that the ith person would like to buy is tickets[i].

Each person takes exactly 1 second to buy a ticket.A person can only buy 1 ticket at a time and has to go 
back to the end of the line (which happens instantaneously) in order to buy more tickets. If a person does not have any tickets left to buy, 
the person will leave the line.

Return the time taken for the person at position k (0-indexed) to finish buying tickets.

Input: tickets = [2,3,2], k = 2
Output: 6
Explanation: 
- In the first pass, everyone in the line buys a ticket and the line becomes [1, 2, 1].
- In the second pass, everyone in the line buys a ticket and the line becomes [0, 1, 0].
The person at position 2 has successfully bought 2 tickets and it took 3 + 3 = 6 seconds.

*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int TimeforTickets(vector<int>tickets,int k){
    int n=tickets.size();
    queue<int>q;
    int p=k;
    for(int i=0;i<n;i++){
        q.push(tickets[i]);
    }
    int res=0;

    while(true){
        res++;
        if(q.front()>1){
            q.front()--;
            q.push(q.front());
        }
        else if(p==0) break;
        q.pop();
       
        if(--p<0) p=q.size()-1;
    }
    return res;

}

int main(){
    vector<int> V;
    int k,b,a,c;
    cout<<"Enter the size:";
    cin>>a;
    cout<<"Enter the tickets:";
    for(int i=0;i<a;i++){
        cin>>b;
        V.push_back(b);
    }
    cout<<"Enter the index number:";
    cin>>k;

    c=TimeforTickets(V,k);
    cout<<"Time taken for buying the tickets:"<<c;
    
    
}