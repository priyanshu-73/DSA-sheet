#include<iostream>
using namespace std;

// Defining node of the tree
class Node{
    public:
        int data;
        Node* left;
        Node* right;
};

pair<int, int> diameterFast(Node* root){
    // When the pointer reaches the last node
    if(root == NULL){
        pair<int, int> p = make_pair(0, 0);
        return p;
    }

    // <int, int> = <diameter, height>
    // Diameter and height of left side
    pair<int, int> left = diameterFast(root -> left);

    // Diameter and height of right side
    pair<int, int> right = diameterFast(root -> right);

    // Diameter of left
    int op1 = left.first;
    // Diameter of right
    int op2 = right.first;
    // Diameter of the tree
    int op3 = left.second + right.second + 1;

    // Maximum diameter
    pair<int, int> ans;
    // max diameter
    ans.first = max(op1, max(op2, op3));
    // Height
    ans.second = max(left.second, right.second) + 1;

    return ans;
}