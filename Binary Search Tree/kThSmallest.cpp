#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
};

class Solution {
  public:
    int ans = -1;
    void dfs(Node* root, int &k){
        if(root == NULL) return;
        
        dfs(root -> left, k);
        k--;
        if(k == 0){
            ans = root -> data;
            return;
        }
        dfs(root -> right, k);
    }
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K) {
        dfs(root, K);
        return ans;
    }
};