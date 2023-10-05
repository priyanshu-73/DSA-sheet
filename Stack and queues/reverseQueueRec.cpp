#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

class Solution
{
    public:
    void helper(queue<int> &q){
        if(q.empty()){
            return;
        }
        
        int neww = q.front();
        q.pop();
        helper(q);
        q.push(neww);
    }
    
    queue<int> rev(queue<int> q)
    {
        helper(q);
        return q;
    }
};