#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* findMid(Node* head){
    if(head == NULL)
        return NULL;
    
    Node* slow = head;
    Node* fast = head -> next;
    while(fast != head && fast -> next != head){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    if(head == NULL || head -> next == head){
        *head1_ref = head;
        *head2_ref = NULL;
        return;
    }
    
    Node* mid = findMid(head);
    Node* tail = head;
    while(tail -> next != head)
        tail = tail -> next;
        
    *head1_ref = head;
    *head2_ref = mid -> next;
    mid -> next = *head1_ref;
    tail -> next = *head2_ref;
}