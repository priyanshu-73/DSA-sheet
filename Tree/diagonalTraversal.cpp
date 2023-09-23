#include<iostream>
using namespace std;

class node{
    public:
        int val;
        node* left;
        node* right;
};

vector<int> diagonal(Node *root) {
   vector<int> ans;
   queue<Node*> q; q.push(root);
   while (!q.empty()) {
       Node *node = q.front(); q.pop();
       while (node) {
           ans.push_back(node->data);
           q.push(node->left);
           node = node->right;
       }
   }
   return ans;
}