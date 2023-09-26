#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
};

class Solution
{
    public:
    int ans;
    void dfs(Node* root, int &k){
        if(root == NULL) return;
        
        dfs(root -> right, k);
        k--;
        if(k == 0){
            ans = root -> data;
            return;
        }
        dfs(root -> left, k);
    }
    int kthLargest(Node *root, int k)
    {
        dfs(root, k);
        return ans;
    }
};