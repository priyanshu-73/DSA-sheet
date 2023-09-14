#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

Node* merge(Node* &head1, Node* &head2){
    Node* curr = new Node(0);
    Node* res = curr;
    while(head1 != NULL && head2 != NULL){
        if(head1 -> data < head2 -> data){
            curr -> bottom = head1;
            curr = curr -> bottom;
            head1 = head1 -> bottom;
        }
        else{
            curr -> bottom = head2;
            curr = curr -> bottom;
            head2 = head2 -> bottom;
        }
    }
    if(head1 != NULL) curr -> bottom = head1;
    else curr -> bottom = head2;
    return res -> bottom;
}    

Node *flatten(Node *root)
{
   if(root == NULL || root -> next == NULL)
    return root;
   
   root -> next = flatten(root -> next);
   
   root = merge(root, root -> next);
   
   return root;
}