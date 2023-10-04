#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

class Solution {
public:
    int findMaxLen(string s) {
        stack<int> st;
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                if (!st.empty() && s[st.top()] == '(') {
                    st.pop();
                } else {
                    st.push(i);
                }
            }
        }
        
        int result = 0;
        int lastIndex = n;
        
        while (!st.empty()) {
            int top = st.top();
            st.pop();
            result = max(result, lastIndex - top - 1);
            lastIndex = top;
        }
        
        return max(result, lastIndex);
    }
};
