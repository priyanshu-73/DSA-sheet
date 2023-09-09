#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

void rotate(node* &head){

    if(head == NULL || head -> next == NULL)
        return;

    node* curr = head;
    while(curr -> next -> next != NULL){
        curr = curr -> next;
    }

    curr -> next -> next = head;
    curr -> next = NULL;
}

int main(){

}