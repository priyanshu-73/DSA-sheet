#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node* right;
  Node(int d){
      this -> data = d;
      this -> left = NULL;
      this -> right = NULL;
  }
};


class Solution{
    public:
    Node* insert(Node* root, int d){
        if(root == NULL) 
            return root = new Node(d);
        
        if(d > root -> data)
            root -> right = insert(root -> right, d);
        else if(d < root -> data){
            root -> left = insert(root -> left, d);
        }
        return root;
    }
    
    Node* findSucc(Node* root, int d){
        Node* temp = root;
        Node* succ = NULL;
        while(temp != NULL){
            if(d >= temp -> data)
                temp = temp -> right;
            else{
                succ = temp;
                temp = temp -> left;
            }
        }
        return succ;
    }
    
    vector<int> findLeastGreater(vector<int>& arr, int n) { 
        Node* root = NULL;
        for(int i = n - 1; i >= 0; i--){
            root = insert(root, arr[i]);
            Node* succ = findSucc(root, arr[i]);
            if(succ == NULL)
                arr[i] = -1;
            else
                arr[i] = succ -> data;
        }
        return arr;
    }
};