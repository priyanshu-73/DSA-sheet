#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

void helper(queue<int> &q, int k){
    if(k == 0)
        return;
        
    int temp = q.front();
    q.pop();
    helper(q, k - 1);
    q.push(temp);
}

queue<int> modifyQueue(queue<int> q, int k) {
    int v = q.size() - k;
    helper(q, k);
    
    while(v--){
        q.push(q.front());
        q.pop();
    }
    return q;
}