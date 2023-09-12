#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

void deleteNode(struct Node **head, int key)
{

    Node* curr = *head;
    Node* prev = NULL;
    while(curr->data != key){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    return;
}
