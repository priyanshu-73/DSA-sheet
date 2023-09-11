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

class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    Node* findMiddle(Node* head){
        Node* cur = head;
        while(head){
            cur = cur->next;
            head = head->next;
            if(head)
                head = head->next;
        }
        return cur;
    }
    
    Node* reverse(Node* head){
        Node* curr = head;
        Node* prev = NULL;
        Node* forw = NULL;
        while(curr != NULL){
            forw = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }
    
    bool isPalindrome(Node *head)
    {
        if(!head) return true;
        Node* curr = head;
        Node* mid = findMiddle(head);
        Node* reversed = reverse(mid);
        while(reversed != NULL){
            if(curr -> data != reversed -> data){
                return false;
            }
            curr = curr -> next;
            reversed = reversed -> next;
        }
        return true;
    }
};