#include<iostream>
#include<queue>
#include<limits.h>
using namespace std;

int kthSmallest(vector<vector<int>> mat, int n, int k)
{
  priority_queue<int> pq;
  for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
          pq.push(mat[i][j]*-1);
      }
  }
  
  for(int i = 0; i < k - 1; i++){
      pq.pop();
  }
  
  return pq.top()*-1;
}