#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        int zeroCnt = 0;
        int oneCnt = 0;
        int twoCnt = 0;
        Node* curr = head;
        while(curr != NULL){
            int val = curr -> data;
            if(val == 0)
                zeroCnt++;
            else if(val == 1)
                oneCnt++;
            else
                twoCnt++;
            curr = curr -> next;
        }
        
        curr = head;
        while(curr != NULL){
            if(zeroCnt != 0){
                curr -> data = 0;
                zeroCnt--;
            }
            else if(oneCnt != 0){
                curr -> data = 1;
                oneCnt--;
            }
            else{
                curr -> data = 2;
                twoCnt--;
            }
            curr = curr -> next;
        }
        return head;
    }
};