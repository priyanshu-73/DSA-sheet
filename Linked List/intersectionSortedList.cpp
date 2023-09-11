#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

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

Node* findIntersection(Node* head1, Node* head2)
{
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    Node* curr = head1;
    Node* curr1 = head2;
    while(curr1 != NULL && curr != NULL){
        if(curr1 -> data < curr -> data){
            curr1 = curr1 -> next;
        }
        else if(curr -> data < curr1 -> data){
            curr = curr -> next;
        }
        else{
            insert(ansHead, ansTail, curr -> data);
            curr = curr -> next;
            curr1 = curr1 -> next;
        }
    }
    return ansHead;
}