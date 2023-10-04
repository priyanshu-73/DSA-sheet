#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        stack<int> s;
        vector<int> ans(n);
        for(int i = n - 1; i >= 0; i--){
            while(!s.empty() and s.top() >= arr[i])
                s.pop();
            ans[i] = s.empty() ? -1 : s.top();
            
            s.push(arr[i]);
        }
        return ans;
    } 
};