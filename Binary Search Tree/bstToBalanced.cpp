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
    Node* inorderToBst(Node* root, int s, int e, vector<int> &v){
        if(s > e) return NULL;
        int mid = s + (e - s)/2;
        
        Node* newRoot = new Node(v[mid]);
        newRoot -> left = inorderToBst(root, s, mid - 1, v);
        newRoot -> right = inorderToBst(root, mid + 1, e, v);
        return newRoot;
    }
    public:
    // Your are required to complete this function
    // function should return root of the modified BST
    Node* buildBalancedTree(Node* root)
    {
    	vector<int> v;
    	inorder(root, v);
    	root = inorderToBst(root, 0, v.size() - 1, v);
    	return root;
    }
};