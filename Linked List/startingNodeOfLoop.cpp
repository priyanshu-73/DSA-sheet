#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
};

int findFirstNode(Node* head)
    {
        if(head == NULL)
            return -1;
            
        Node* slow = head;
        Node* fast = head;
        
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast) break;
        }
        if(slow != fast) return -1;
        
        slow = head;
        while(slow != fast){
            slow = slow -> next;
            fast = fast -> next;
        }
        return slow -> data;
    }