#include<iostream>
using namespace std;

class node{
    public:
        int val;
        node* left;
        node* right;
};

class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       vector<int> ans;
       queue<Node*> q;
       if(root == NULL) return ans;
       q.push(root);
       while(q.size()){
           int n = q.size();
           for(int i = 0; i < n; i++){
               Node* curr = q.front();
               q.pop();
               if(i == 0) ans.push_back(curr -> data);
               if(curr -> right) q.push(curr -> right);
               if(curr -> left) q.push(curr -> left);
           }
       }
       return ans;
    }
};