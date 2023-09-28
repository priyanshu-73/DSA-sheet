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

bool solve(Node* root, int mn, int mx){
   
   if(root == NULL) return 0;
   if(root->data == mn and root->data == mx) return 1;
   
   return solve(root->left, mn, root->data - 1) or 
   solve(root->right, root->data+1, mx);
   
}
bool isDeadEnd(Node *root)
{
   int mn = 1, mx = INT_MAX;
   return solve(root, mn, mx);
}