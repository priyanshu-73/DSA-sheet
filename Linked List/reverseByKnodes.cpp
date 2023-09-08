#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

struct node *reverse (struct node *head, int k)
{ 
    if(head == NULL)
        return NULL;
            
    struct node *curr = head;
    struct node *prev = NULL;
    struct node *forward = NULL;
    int count = 0;
    while(curr != NULL && count < k){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
        
    if(forward != NULL){
        head -> next = reverse(forward, k);
    }
    return prev;
}