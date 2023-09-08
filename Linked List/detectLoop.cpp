#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

bool detectLoop(Node* head)
{
    if(head == NULL || head -> next == NULL){
        return false;
    }
    Node* slow = head;
    Node* fast = head;
        
    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast) return true;
    } 
    return false;
}