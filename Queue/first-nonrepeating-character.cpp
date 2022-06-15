/*
First non-repeating character in a stream 
   
Given an input stream of A of n characters consisting only of lower case 
alphabets. The task is to find the first non repeating character, each time
a character is inserted to the stream. If there is no such character then 
append '#' to the answer.
 

Example 1:

Input: A = "aabc"
Output: "a#bb"
Explanation: For every character first non
repeating character is as follow-
"a" - first non-repeating character is 'a'
"aa" - no non-repeating character so '#'
"aab" - first non-repeating character is 'b'
"aabc" - first non-repeating character is 'b'
Example 2:

Input: A = "zz"
Output: "z#"
Explanation: For every character first non
repeating character is as follow-
"z" - first non-repeating character is 'z'
"zz" - no non-repeating character so '#'
*/

#include<iostream>
#include<unordered_map>
#include<string>
#include<queue>
using namespace std;

string FirstNonRepeating(string A){
   unordered_map<char,int>count;   //map to store the count of character
   queue<char>q;                   // queue for checking the repeating element
   string ans="";

  for(int i=0;i<A.length();i++){
    char ch=A[i];
    count[ch]++;     //increase count of the ch character
    q.push(A[i]);    //push the A[i] char in queue

    while(!q.empty()){
    //if count of char is greater then 1 or it repeating , we pop character 
    // from queue ,otherwise push in string
        if(count[q.front()]>1) q.pop();
        else {
            ans.push_back(q.front());
            break;
        }
    }
    //if queue is empty then push # in string
    if(q.empty()) ans.push_back('#');

}
    return ans;
}

int main(){
    string s1,s2;
    cout<<"Enter the string:";
    cin>>s1;
    s2=FirstNonRepeating(s1);
    cout<<"First non-repeating string:";
    for(int i=0;i<s2.length();i++){
        cout<<s2[i];
    }
}
/*
Enter the string:aabc
First non-repeating string:a#bb
*/