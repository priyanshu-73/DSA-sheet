#include<iostream>
using namespace std;

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(node == 0)
            return 0;
        return max(height(node -> right), height(node -> left)) + 1;
    }
};