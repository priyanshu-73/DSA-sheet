#include<iostream>
using namespace std;

struct compare{
    bool operator()(Node* n1, Node* n2){
        return n1 -> data > n2 -> data;
    }
};

class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
        priority_queue<Node*, vector<Node*>, compare > pq;
        for(int i = 0; i < K; i++){
            if(arr[i]) pq.push(arr[i]);
        }
        
        if(pq.empty()) return NULL;
        Node *head = pq.top();
        Node* node = head;
        while(!pq.empty()){
            Node* n = pq.top();
            pq.pop();
            if(n -> next) pq.push(n->next);
            node -> next = n;
            node = n;
        }
        return head;
    }
};