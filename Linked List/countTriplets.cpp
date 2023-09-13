#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

int countTriplets(Node* head, int x){
    Node* front = head;
    Node* back = head;
    int count = 0;
    while(back -> next != NULL){
        back = back -> next;
    }
    while(front -> next -> next !=  NULL){
        Node* ahead = front -> next;
        while(ahead != NULL && back != NULL && ahead != back){
            if((front -> data + back -> data + ahead -> data) == x){
                count++;
                ahead = front -> next;
                back = back -> prev;
            }
            else if((front -> data + back -> data + ahead -> data) < x)
                ahead = ahead -> next;
            else
                back = back -> prev;
        }
        front = front -> next;
    }
    if(count > 0)
        return count;
    else
        return -1;
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
    int x = 18;
 
    cout << countTriplets(head, x) << endl;
 
    return 0;
}