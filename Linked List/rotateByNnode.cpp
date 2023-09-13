#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

void rotate(Node* &head, int x){
    if(head == NULL && x == 0)
        return;
    Node* curr = head;
    Node* tail = head;
    while(tail -> next != NULL)
        tail = tail -> next;
    int count = 1;
    while(count != x){
        curr = curr -> next;
        count++;
    }
    Node* head1 = curr -> next;
    curr -> next -> next -> prev = NULL;
    curr -> next = NULL;
    tail -> next = head;
    head -> prev = tail;
    head = head1;
}


void insert(Node* &head, int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = temp->prev = NULL;
    if (!(head))
        (head) = temp;
    else
    {
        temp->next = head;
        (head)->prev = temp;
        (head) = temp;
    }
}
 
// Driver program
int main()
{
    struct Node *head = NULL;
    insert(head, 9);
    insert(head, 8);
    insert(head, 6);
    insert(head, 5);
    insert(head, 4);
    insert(head, 2);
    insert(head, 1);
    int x = 2;
    
    Node* curr = head;
    while(curr != NULL){
        cout << curr -> data << " ";
        curr = curr -> next;
    }
    cout << endl;

    rotate(head, x);
    curr = head;
    while(curr != NULL){
        cout << curr -> data << " ";
        curr = curr -> next;
    }
    cout << endl;
 
    return 0;
}