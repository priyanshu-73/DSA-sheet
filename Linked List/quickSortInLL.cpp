#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int d){
        this -> data = d;
        this ->next = NULL;
    }
};

node* partition(node* &head, node* &tail){
    node* pivot = head;
    node* curr = head -> next;
    node* prev = head;
    
    while(curr != tail -> next){
        if(pivot -> data > curr -> data){
            swap(prev -> next -> data, curr -> data);
            prev = prev -> next;
        }
        curr = curr -> next;
    }
    swap(prev -> data, pivot -> data);
    return prev;
}

void solveSort(node* &head, node* &tail){
    if(head == NULL || tail == NULL || head == tail)
        return;
        
    node* pivot = partition(head, tail);
    solveSort(head, pivot);
    solveSort(pivot -> next, tail);
}

//you have to complete this function
void quickSort(struct node **head) {
    if(head == NULL)
        return;
    
    node* curr = *head;
    while(curr ->next != NULL)
        curr = curr -> next;
    node* tail = curr;
    
    solveSort(*head, tail);
}