#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};


Node* findStartingNode(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast) break;
    }
    if(slow != fast)
        return NULL;
        
    slow = head;
    while(slow != fast){
        slow = slow -> next;
        fast = fast -> next;
    }
    return slow;
} 
    
void removeLoop(Node* head)
{
    Node* startingNode = findStartingNode(head);
    if(startingNode == NULL)
        return;
    Node* temp = startingNode;
    while(temp -> next != startingNode){
        temp = temp -> next;
    }
    temp -> next = NULL;
}