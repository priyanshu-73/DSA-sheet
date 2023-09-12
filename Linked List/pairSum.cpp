#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }
};


void pairSum(node* head, int x){
    node* start = head;
    node* end = head;
    while(end -> next != NULL)
        end = end -> next;
    
    bool f = false;

    while(start != end && end -> next != start){
        if((start -> data) + (end -> data) == x){
            f = true;
            cout << '(' << start -> data << ", " << end -> data << ')' << endl;
            start = start -> next;
            end = end -> prev;
        }
        else{
            if((start -> data) + (end -> data) < x)
                start = start -> next;
            else if((start -> data) + (end -> data) > x)
                end = end -> prev;
        }
    }
    if(f == false) cout << "No pairs exist" << endl;
}
