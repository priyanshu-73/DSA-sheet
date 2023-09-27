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

void inorder(node* root, vector<int> &v){
    if(root == NULL) return;

    inorder(root -> left, v);
    v.push_back(root -> data);
    inorder(root -> right, v);
}

node* inorderToBst(node* root, vector<int> v, int s, int e){
    if(s > e) return NULL;

    int mid = s + (e - s)/2;
    root = new node(v[mid]);
    root -> left = inorderToBst(root, v, s, mid - 1);
    root -> right = inorderToBst(root, v, mid + 1, e);
    return root;
}

node* mergeBST(node *root1, node *root2)
{
    vector<int> v;
    inorder(root1, v);
    inorder(root2, v);
    sort(v.begin(), v.end());
    node* root = inorderToBst(root, v, 0, v.size() - 1);
    return root;
}

void printInorder(node* node)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder(node->left);
 
    cout << node->data << " ";
 
    /* now recur on right child */
    printInorder(node->right);
}

int main()
{
    /* Create following tree as first balanced BST
        100
        / \
        50 300
    / \
    20 70
    */
    node *root1 = new node(100);
    root1->left     = new node(50);
    root1->right = new node(300);
    root1->left->left = new node(20);
    root1->left->right = new node(70);
 
    /* Create following tree as second balanced BST
            80
        / \
        40 120
    */
    node *root2 = new node(80);
    root2->left     = new node(40);
    root2->right = new node(120);
 
    node *mergedTree = mergeBST(root1, root2);
 
    cout << "Following is Inorder traversal of the merged tree \n";
    printInorder(mergedTree);
 
    return 0;
}