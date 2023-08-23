#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool ispar(string s)
{
        // Your code here
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '{' || s[i] == '[' || s[i] == '(')
            st.push(s[i]);
        else{
            if(st.empty())
                return false;
            char ch = st.top();
            if((s[i] == ')' && ch != '(') || (s[i] == ']' && ch != '[') 
            || (s[i] == '}' && ch != '{')){
                return false;
            }
            st.pop();
        }
    }
    if(st.empty())
        return true;
    return false;
}