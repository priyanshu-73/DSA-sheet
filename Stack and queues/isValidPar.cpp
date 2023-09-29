#include<iostream>
#include<stack>
using namespace std;

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        if(x.size() == 1)
            return false;
            
        int i = 0;
        bool ans = 1;
        stack<char> s;
        while(i < x.size()){
            if(x[i] == '(' || x[i] == '[' || x[i] == '{'){
                s.push(x[i]);
                i++;
            }
            else{
                if(s.empty()) return false;
                char ch = s.top();
                if((ch != '(' && x[i] == ')') || (ch != '[' && x[i] == ']') || (ch != '{' && x[i] == '}'))
                    ans = 0;
                s.pop();
                i++;
            }
        }
        if(!s.empty())
            ans = 0;
        return ans;
    }

};