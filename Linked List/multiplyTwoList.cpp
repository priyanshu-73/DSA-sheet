#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

long long  multiplyTwoLists (Node* l1, Node* l2)
{
  long long int num1 = 0, num2 = 0;
  long long int mod = 1000000007;
  while(l1 != NULL){
      num1 = (num1 * 10 + l1 -> data)%mod;
      l1 = l1 -> next;
  }
  
  while(l2 != NULL){
      num2 = (num2 * 10 + l2 -> data)%mod;
      l2 = l2 -> next;
  }
  return (num1 * num2)%mod;
}