#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

Node* reverse(Node* head, int x){

    Node* curr = head;
    Node* prev = NULL;
    Node* forw = NULL;

    int count = 0;
    while(curr != NULL && count != x){
        forw = curr -> next;
        curr -> next = prev;
        curr -> prev = forw;
        prev = curr;
        curr = forw;
        count++;
    }
    count = 0;
    if(forw != NULL){
        head -> next = reverse(forw, x);
    }
    return prev;
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
    Node *head = NULL;
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

    Node* ans = reverse(head, x);
    while(ans != NULL){
        cout << ans -> data << " ";
        ans = ans -> next;
    }
    cout << endl;
 
    return 0;
}