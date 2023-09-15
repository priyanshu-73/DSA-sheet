#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

class Solution{
    
    private:
    void insert(Node* &head, Node* &tail, int d){
        Node* temp = new Node(d);
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail -> next = temp;
            tail = temp;
        }
    }
    
    public:
    Node *copyList(Node *head)
    {
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        Node* temp = head;
        while(temp != NULL){
            insert(cloneHead, cloneTail, temp -> data);
            temp = temp -> next;
        }
        
        Node* cloneNode = cloneHead;
        Node* originalNode = head;
        while(originalNode != NULL){
            Node* nxt = originalNode -> next;
            originalNode -> next = cloneNode;
            originalNode = nxt;
            
            nxt = cloneNode -> next;
            cloneNode -> next = originalNode;
            cloneNode = nxt;
        }
        
        temp = head;
        while(temp != NULL){
            if(temp -> next != NULL){
                temp -> next -> arb = temp -> arb ? temp -> arb -> next : temp -> arb;
            }
            temp = temp -> next -> next;
        }
        
        cloneNode = cloneHead;
        originalNode = head;
        while(originalNode != NULL){
            originalNode -> next = cloneNode -> next;
            originalNode = originalNode -> next;
            
            if(originalNode != NULL)
                cloneNode -> next = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        return cloneHead;
    }

};