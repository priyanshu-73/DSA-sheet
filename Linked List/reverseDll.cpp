#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* reverseDLL(Node * head)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* forw = NULL;
    while(curr != NULL){
        forw = curr -> next;
        curr -> next = prev;
        curr -> prev = forw;
        prev = curr;
        curr = forw;
    }
    return prev;
}