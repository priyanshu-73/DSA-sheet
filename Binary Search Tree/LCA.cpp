#include<iostream>
using namespace std;

class node{
    public:
    int key;
    node* left;
    node* right;
};

Node* LCA(Node *root, int n1, int n2)
{
    if(root == NULL) return root;
    Node* temp = root;
    while(temp){
        if(n1 < temp -> data && n2 < temp -> data){
            temp = temp -> left;
        }
        else if(n1 > temp -> data && n2 > temp -> data)
            temp = temp -> right;
        else
            return temp;
    }
    return root;
}