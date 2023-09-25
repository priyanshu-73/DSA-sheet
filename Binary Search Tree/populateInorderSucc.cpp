#include<iostream>
using namespace std;

class node{
    public:
    int key;
    node* left;
    node* right;
};

class Solution
{
public:

    void inorder(Node* root, vector<Node*> &a){
        if(root){
            inorder(root -> left, a);
            a.push_back(root);
            inorder(root -> right, a);
        }
    }

    void populateNext(Node *root)
    {
        vector<Node*> a;
        inorder(root, a);
        for(int i = 0; i < a.size() - 1; i++){
            a[i] -> next = a[i + 1];
        }
    }
};