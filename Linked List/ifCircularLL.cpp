#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

Node* startingNode(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast) break;
    }
    if(slow != head)
        return NULL;
    slow = head;
    while(slow != fast){
        slow = slow -> next;
        fast = fast -> next;
    }
    return slow;
}

/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   if(head == NULL || head -> next == NULL)
    return 0;
   Node* starting = startingNode(head);
   if(starting == head)
    return true;
    return false;
}