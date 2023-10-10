#include<iostream>
#include<limits.h>
#include<queue>
#include<algorithm>
using namespace std;

class Node{
  public :
    int data;
    int row;
    int col;
    
    Node(int d, int r, int c){
        data = d;
        row = r;
        col = c;
    }
};

class compare{
  public:
    bool operator()(Node* a, Node* b){
        return a -> data > b -> data; 
    }
};

class Solution{
    public:
    pair<int,int> findSmallestRange(int arr[][N], int n, int k)
    {
         int mini = INT_MAX;
         int maxi = INT_MIN;
         priority_queue<Node*, vector<Node*>, compare> minHeap;
         for(int i = 0; i < k; i++){
             int ele = arr[i][0];
             mini = min(mini, ele);
             maxi = max(maxi, ele);
             minHeap.push(new Node(ele,i,0));
         }
         
         int start = mini, end = maxi;
         while(!minHeap.empty()){
             Node* temp = minHeap.top();
             minHeap.pop();
             mini = temp -> data;
             if(maxi - mini < end - start){
                 start = mini;
                 end = maxi;
             }
             
             if(temp -> col + 1 < n){
                 maxi = max(maxi, arr[temp -> row][temp -> col + 1]);
                 minHeap.push(new Node(arr[temp -> row][temp -> col + 1], temp -> row, temp -> col + 1));
             }
             else{
                 break;
             }
         }
         return {start, end};
    }
};