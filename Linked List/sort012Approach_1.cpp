#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    
    void insert(Node* &tail, Node* curr){
        tail -> next = curr;
        tail = curr;
    }
    
    Node* segregate(Node *head) {
        
        Node* zeroHead = new Node(-1);
        Node* zeroTail = zeroHead;
        Node* oneHead = new Node(-1);
        Node* oneTail = oneHead;
        Node* twoHead = new Node(-1);
        Node* twoTail = twoHead;
        
        Node* curr = head;
        while(curr != NULL){
            int val = curr -> data;
            if(val == 0)
                insert(zeroTail, curr);
            else if(val == 1)
                insert(oneTail, curr);
            else
                insert(twoTail, curr);
                
            curr = curr -> next;
        }
        if(oneHead -> next != NULL){
            zeroTail -> next = oneHead -> next;
            oneTail -> next = twoHead -> next;
        }
        else{
            zeroTail -> next = twoHead -> next;
        }
        twoTail -> next = NULL;
        return zeroHead -> next;
    }
};