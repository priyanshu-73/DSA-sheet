#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this -> data = d;
        this ->next = NULL;
    }
};

int intersectPoint(Node* head1, Node* head2)
{
    while(head1){
        head1 -> data = (head1 -> data) + 10000;
        head1 = head1 -> next;
    }
    
    while(head2){
        if(head2 -> data > 1000)
            return head2 -> data - 10000;
        head2 = head2 -> next;
    }
    return -1;
}