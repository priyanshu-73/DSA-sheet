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

class Solution{
public:
    //Function that constructs BST from its preorder traversal.
    Node* preToTree(Node* &root, int d){
        if(root == NULL){
            root = newNode(d);
            return root;
        }
        if(d > root -> data) 
        root -> right = preToTree(root -> right, d);
        if(d < root -> data) 
        root -> left = preToTree(root -> left, d);
        
        return root;
    }
    
    Node* post_order(int pre[], int size)
    {
        int i = 0;
        Node* root = NULL;
        for(int i = 0; i < size; i++){
            root = preToTree(root, pre[i]);
        }
        print(root);
    }
};