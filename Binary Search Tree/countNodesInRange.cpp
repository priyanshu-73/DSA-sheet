#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
};

class Solution{
public:
    void count(Node* root, int &cnt, int l, int h){
        if(root == NULL) return;
        if(root -> data >= l && root -> data <= h) cnt++;
        count(root -> left, cnt, l, h);
        count(root -> right, cnt, l, h);
    }

    int getCount(Node *root, int l, int h)
    {
        int cnt = 0;
        count(root, cnt, l, h);
        return cnt;
    }
};