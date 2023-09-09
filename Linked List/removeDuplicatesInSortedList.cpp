#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node *removeDuplicates(Node *head)
{
    Node* curr = head;
    Node* forward = NULL;
    while(curr != NULL && curr -> next != NULL){
        if(curr -> next -> data == curr -> data){
            forward = curr -> next -> next;
            curr -> next -> next = NULL;
            delete curr -> next;
            curr -> next = forward;
        }
        else curr = curr -> next;
    }
    return head;
}