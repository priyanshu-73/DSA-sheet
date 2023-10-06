#include<iostream>
using namespace std;

class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        vector<int>ans;
        priority_queue<pair<int, int>>pq;
        for(int i=0; i<k; i++){
            pq.push({arr[i], i});
        }
        ans.push_back(pq.top().first);
        for(int i=k; i<n; i++){
            pq.push({arr[i], i});
            while((pq.top().second > i-k)==false){
                pq.pop();
                
            }
            ans.push_back(pq.top().first);
        }
        return ans;
        }
};