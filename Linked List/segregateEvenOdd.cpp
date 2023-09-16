#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

class Solution{
    
private:
    
    void insert(Node* &h, Node* &t, int d){
        Node* val = new Node(d);
        if(h == NULL){
            h = val;
            t = val;
        }    
        else{
            t -> next = val;
            t = val;
        }
    }

public:
    Node* divide(int N, Node *head){
        Node* evenH = NULL;
        Node* evenT = NULL ;
        Node* oddH = NULL;
        Node* oddT = NULL;
        Node* curr = head;
        while(curr != NULL){
            int val = curr -> data;
            if(val % 2 == 0){
                insert(evenH, evenT, val);
            }
            else{
                insert(oddH, oddT, val);
            }
            curr = curr -> next;
        }
        
        if(evenH != NULL){
            evenT -> next = oddH;
            return evenH;
        }
        return oddH;
    }
};