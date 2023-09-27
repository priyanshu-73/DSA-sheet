#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
};

class Solution
{
public:
    int ans = 0;
    void find(Node* root, unordered_set<int> &s, int x){
        if(root == NULL) 
        return;
        
        if(s.find(x - root -> data) != s.end()) 
        ans++;
        
        find(root -> left, s, x);
        find(root -> right, s, x);
    }
    
    void fill2nd(Node* root, unordered_set<int> &s){
        if(root == NULL) 
        return;
        
        s.insert(root -> data);
        fill2nd(root -> left, s);
        fill2nd(root -> right, s);
    }
    
        int countPairs(Node* root1, Node* root2, int x)
        {
            unordered_set<int> s;
            fill2nd(root2, s);
            find(root1, s, x);
            return ans;
        }
};