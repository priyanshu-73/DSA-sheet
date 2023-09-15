#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

class Solution
{
    
    private :
    void insertAtTail(Node* &head, Node* &tail, int e){
        Node* d = new Node(e);
        if(head == NULL){
            head = d;
            tail = d;
            return;
        }
        else{
            tail -> next = d;
            tail = d;
        }
    }
    
    public:
    Node *copyList(Node *head)
    {
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        while(temp != NULL){
            insertAtTail(cloneHead, cloneTail, temp -> data);
            temp = temp -> next;
        }
        
        unordered_map<Node*, Node*> oldToNew;
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode != NULL){
            oldToNew[originalNode] = cloneNode;
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        
        originalNode = head;
        cloneNode = cloneHead;
        while(originalNode != NULL){
            cloneNode -> arb = oldToNew[originalNode -> arb];
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        
        return cloneHead;
    }
};