#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
};

node* newNode(int data)
{
    node* temp = new node();
 
    temp->data = data;
    temp->left = temp->right = NULL;
 
    return temp;
}

node* constructTree(vector<int> pre, int key, int *index, int min, int max){
    int size = pre.size();
    if(*index >= size) return NULL;

    node* root = NULL;
    if(key > min && key < max){
        root = newNode(key);
        *index = *index + 1;
        if(*index < size)
            root -> left = constructTree(pre, pre[*index], index, min, key);
        if(*index < size)
            root -> right = constructTree(pre, pre[*index], index, key, max);
    }
    return root;
}

void printInorder(node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

int main()
{
    vector<int> pre = { 10, 5, 1, 7, 40, 50 };
    int ind = 0;
 
    // Function call
    node* root = constructTree(pre, pre[0], &ind, INT32_MIN, INT32_MAX);
 
    printInorder(root);
 
    return 0;
}