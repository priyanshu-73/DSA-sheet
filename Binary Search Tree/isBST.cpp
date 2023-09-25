#include<iostream>
using namespace std;

class node{
    public:
    int key;
    node* left;
    node* right;
};

class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    void inorder(Node* root, vector<int> &ans){
        if(root != NULL){
        inorder(root -> left, ans);
        ans.push_back(root -> data);
        inorder(root -> right, ans);
        }
    }
    
    bool isBST(Node* root) 
    {
        vector<int> v;
        inorder(root, v);
        return is_sorted(v.begin(), v.end());
    }
};