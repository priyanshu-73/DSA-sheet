#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
        Node* first = head, *second = head;
        while(first){
            if(n){
                first = first -> next;
                n--;
            }
            else{
                second = second -> next;
                first = first -> next;
            }
        }
        if(n) return -1;
        return second -> data;
    }
};