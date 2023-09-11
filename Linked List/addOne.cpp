#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

void reverse(Node* &head){
    if(head == NULL && head -> next == NULL)
        return;
    Node* curr = head;
    Node* forw = NULL;
    Node* prev = NULL;
    while(curr != NULL){
        forw = curr -> next;
        curr -> next = prev;
        prev = curr;
        head = prev;
        curr = forw;
    }
}
    
Node* addOne(Node *head) 
{
    reverse(head);
    bool f = true;
    Node* curr = head;
    while(curr != NULL && f == true){
        if(curr -> data == 9 && curr -> next == NULL){
            curr -> data = 1;
            Node* temp = new Node(0);
            temp -> next = head;
            head = temp;
            curr = curr -> next;
        }
        else if(curr -> data == 9){
            curr -> data = 0;
            curr = curr -> next;
        }
        else{
            curr -> data = curr -> data + 1;
            curr = curr -> next;
            f = false;
        }
    }
    reverse(head);
    return head;
}