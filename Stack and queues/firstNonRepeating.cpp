#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

class Solution {
	public:
		string FirstNonRepeating(string A){
		    queue<char> q;
		    unordered_map<int, int> count;
		    string ans = "";
		    for(int i = 0; i < A.length(); i++){
		        char ch = A[i];
		        count[ch]++;
		        q.push(ch);
		        while(!q.empty()){
		            if(count[q.front()] > 1)
		                q.pop();
		            else{
		                ans.push_back(q.front());
		                break;
		            }
		        }
		        if(q.empty())
		            ans.push_back('#');
		    }
		    return ans;
		}

};