#include<iostream>
using namespace std;

class node{
    public:
        int val;
        node* left;
        node* right;
};

vector <int> preorder(Node* root)
{
  vector<int> ans;
  if(root == NULL) return ans;
  
  stack<Node*> s;
  Node* temp = root;
  s.push(temp);
  
  while(!s.empty()){
      Node* curr = s.top();
      s.pop();
      ans.push_back(curr -> data);
      
      if(curr -> right)
        s.push(curr -> right);
      if(curr -> left)
        s.push(curr -> left);
  }
  return ans;
}