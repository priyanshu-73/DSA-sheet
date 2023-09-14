#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

class compare{
    public:
    bool operator()(Node* a, Node* b){
        return a -> data > b -> data;
    }
};

class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
        priority_queue<Node*, vector<Node*>, compare> pq;
        for(int i = 0; i < K; i++){
            if(arr[i]) pq.push(arr[i]);
        }
        if(pq.empty()) return NULL;
        
        Node* head = pq.top();
        Node* curr = head;
        while(!pq.empty()){
            Node* n = pq.top();
            pq.pop();
            if(n -> next != NULL) pq.push(n -> next);
            curr -> next = n;
            curr = n;
        }
        return head;
    }
};