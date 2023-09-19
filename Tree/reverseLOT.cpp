#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> reverseLevelOrder(Node* node)
    {
        queue<Node*> q;
        vector<int> ans;
        q.push(node);
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            ans.push_back(temp -> data);
            if(temp -> right) q.push(temp -> right);
            if(temp -> left) q.push(temp -> left);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};