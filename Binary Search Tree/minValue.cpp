#include<iostream>
using namespace std;

class node{
    public:
    int key;
    node* left;
    node* right;
};

int minValue(Node* root) {
    if(root == NULL) return -1;
    if(root -> left == NULL)
        return root -> data;
    
    Node* curr = root;
    while(curr -> left != NULL)
        curr = curr -> left;
    
    return curr -> data;
}