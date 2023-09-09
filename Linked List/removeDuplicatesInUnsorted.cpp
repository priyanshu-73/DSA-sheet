#include<iostream>
#include<unordered_map>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
};

Node * removeDuplicates( Node *head) 
{
    unordered_map<int, int> mp;
    Node* curr = head;
    mp[curr -> data] = 1;
    Node* forward = NULL;
    while(curr -> next != NULL){
        if(mp.count(curr -> next -> data)){
            forward = curr -> next -> next;
            curr -> next -> next = NULL;
            delete curr -> next;
            curr -> next = forward;
        }
        else{
            curr = curr -> next;
            ++mp[curr -> data];
        }
            
    }
    return head;
}