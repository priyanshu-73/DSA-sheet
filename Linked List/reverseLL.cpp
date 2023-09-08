#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* reverseList(Node *head)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;
    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;  
    }
    return prev;
}