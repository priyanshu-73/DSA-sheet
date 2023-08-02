#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int count = 0;
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n; i++){
            if(mp.find(k - arr[i]) != mp.end()){
                count += mp[k - arr[i]];
            }
            mp[arr[i]]++;
        }
        
        return count;
    }
};