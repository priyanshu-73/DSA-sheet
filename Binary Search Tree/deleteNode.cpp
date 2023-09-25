#include<iostream>
using namespace std;

class node{
    public:
    int key;
    node* left;
    node* right;
};

Node *deleteNode(Node *root, int key) {
    if(root == NULL){
        return NULL;
    }
    if(root -> data == key){
        return helper(root);
    }
    
    Node* dummy = root;
    while(root != NULL){
        if(root -> data > key){
            if(root -> left != NULL && root -> left -> data == key){
                root -> left = helper(root -> left);
                break;
            }
            else root = root -> left;
        }
        else{
            if(root -> right != NULL && root -> right -> data == key){
                root -> right = helper(root -> right);
                break;
            }
            else
                root = root -> right;
        }
    }
    return dummy;
}