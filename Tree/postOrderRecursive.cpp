#include<iostream>
using namespace std;

class node{
    public:
        int val;
        node* left;
        node* right;
};

void solve(Node* root, vector<int> &ans){
    if(root == NULL) return;
    
    solve(root -> left, ans);
    solve(root -> right, ans);
    ans.push_back(root -> data);
}

vector <int> postOrder(Node* root)
{
  vector<int> ans;
  solve(root, ans);
  return ans;
}