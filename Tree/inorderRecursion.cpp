#include<iostream>
using namespace std;

class node{
    public:
        int val;
        node* left;
        node* right;
};

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> ans;
    vector<int> inOrder(Node* root) {
        
        if(root){
            inOrder(root -> left);
            ans.push_back(root -> data);
            inOrder(root -> right);
        }
        
        return ans;
    }
};