#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};


void reverse(struct Node* &head, struct Node* curr, struct Node* prev){
    if(curr == NULL){
        head = prev;
        return;
    }
        
    Node* forward = curr -> next;
    reverse(head, forward, curr);
    curr -> next = prev;
}
    
//Function to reverse a linked list.
struct Node* reverseList(struct Node *head)
{
    struct Node* curr = head;
    struct Node* prev = NULL;
    reverse(head, curr, prev);
    return head;
}