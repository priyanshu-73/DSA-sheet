#include<iostream>
using namespace std;

class node{
    public:
        int val;
        node* left;
        node* right;
};

node* createNode(int val)
{
    node* newNode = (node*)malloc(sizeof(node));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
 
// Helper function to print Inorder traversal
void inorder(node* root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout <<" "<< root->val;
    inorder(root->right);
}

void mirrorify(node* root){
    if(root == NULL)
        return;

    node* temp;
    mirrorify(root -> left);
    mirrorify(root -> right);

    temp = root -> right;
    root -> right = root -> left;
    root -> left = temp;
}

int main()
{
 
    node* tree = createNode(5);
    tree->left = createNode(3);
    tree->right = createNode(6);
    tree->left->left = createNode(2);
    tree->left->right = createNode(4);
 
    // Print inorder traversal of the input tree
    cout <<"Inorder of original tree: ";
    inorder(tree);
    node* mirror = NULL;
    mirrorify(tree);
 
    // Print inorder traversal of the mirror tree
    cout <<"\nInorder of mirror tree: ";
    inorder(tree);
 
    return 0;
}