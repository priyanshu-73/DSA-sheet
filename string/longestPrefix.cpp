#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string s = strs[0];
        string l = strs[n - 1];
        string ans = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == l[i]) ans += s[i];
            else break;
        }
        return ans;
    }
};