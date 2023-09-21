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
    vector<int> inOrder(Node* root) {
        vector<int> ans;
        stack<Node*> s;
        
        Node* curr = root;
        while(curr || !s.empty()){
            while(curr){
                s.push(curr);
                curr = curr -> left;
            }
            
            curr = s.top();
            s.pop();
            ans.push_back(curr -> data);
            curr = curr -> right;
        }
        return ans;
    }
};