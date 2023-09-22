#include<iostream>
using namespace std;

class node{
    public:
        int val;
        node* left;
        node* right;
};

vector<int> leftView(Node *root)
{
   vector<int> ans;
   queue<Node*> q;
   if(root == NULL) return ans;
   q.push(root);
   while(q.size()){
       int a = q.size();
       for(int i = 0; i < a; i++){
           Node* curr = q.front();
           q.pop();
           if(i==0) ans.push_back(curr -> data);
           if(curr -> left) q.push(curr -> left);
           if(curr -> right) q.push(curr -> right);
       }
   }
   return ans;
}