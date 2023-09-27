#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
};

void inorder(Node* root, vector<int> &v){
    if(root == NULL) return;
          
    inorder(root -> left, v);
    v.push_back(root -> data);
    inorder(root -> right, v);
}
float findMedian(struct Node *root)
{
      vector<int> v;
      inorder(root, v);
      int n = v.size();
      float ans = 0.0;
      int mid = (0 + n)/2;;
      if(n % 2 == 0)
        ans = (v[mid] + v[mid - 1])/2.0;
      else
        ans = v[mid];
      return ans;
}