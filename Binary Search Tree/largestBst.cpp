#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    int findSize(Node* root){
        if(!root) return 0;
        return findSize(root -> left) + findSize(root -> right) + 1;
    }
    bool isBst(Node* root, int min, int max){
        if(!root) return 1;
        
        if(root -> data >= max || root -> data <= min) return 0;
        return isBst(root -> left, min, root -> data) && isBst(root -> right, root -> data, max);
    }
    
    int largestBst(Node *root)
    {
        if(!root) return 0;
        
        if(isBst(root, INT_MIN, INT_MAX)) return findSize(root);
        return max(largestBst(root -> left), largestBst(root -> right));
    }
};