#include<iostream>
using namespace std;

class node{
    public:
        int val;
        node* left;
        node* right;
};

void solve(Node* root, vector<int> &ans){
    if(root == NULL)
        return;
    ans.push_back(root -> data);
    solve(root -> left, ans);
    solve(root -> right, ans);
}


vector <int> preorder(Node* root)
{
  vector<int> ans;
  solve(root, ans);
  return ans;
}