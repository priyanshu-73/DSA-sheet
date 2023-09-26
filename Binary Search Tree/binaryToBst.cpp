#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
};

class Solution{
    
  private:
   void inorder(Node* root, vector<int> &v){
       if(root == NULL) return;
       
       inorder(root -> left, v);
       v.push_back(root -> data);
       inorder(root -> right, v);
   }
   
   void inorder_bst(Node* root, vector<int> &v, int &i){
       if(root == NULL) return;
       
       inorder_bst(root -> left, v, i);
       root -> data = v[i++];
       inorder_bst(root -> right, v, i);
   }
  
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    Node *binaryTreeToBST (Node *root)
    {
        vector<int> v;
        int i = 0;
        inorder(root, v);
        sort(v.begin(), v.end());
        inorder_bst(root, v, i);
        return root;
    }
};