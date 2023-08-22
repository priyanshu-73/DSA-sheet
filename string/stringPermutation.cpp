#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<string> &ans, string s, int index){
	if(index >= s.length()){
    if(find(ans.begin(), ans.end(), s) == ans.end())
	        ans.push_back(s);
	    return;
    }
	        
	for(int i = index; i < s.length(); i++){
	    swap(s[index], s[i]);
	    solve(ans, s, index + 1);
	    swap(s[index], s[i]);
	    }
	}
	
	vector<string> find_permutation(string S)
	{
        vector<string> ans;
        int index = 0;
        solve(ans, S, index);
        return ans;
	}