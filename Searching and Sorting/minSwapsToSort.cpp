#include<bits/stdc++.h>
using namespace std;

int minSwaps(vector<int>&nums)
	{
	    int n = nums.size();
	    int ans = 0;
	    vector<pair<int, int>> v;
	    for(int i = 0; i < n; i++){
	        v.push_back({nums[i], i});
	    }
	    
	    sort(v.begin(), v.end());
	    
	    for(int i = 0; i < n; i++){
	        if(i != v[i].second){
	            ans++;
	            swap(v[i], v[v[i].second]);
	            i--;
	        }
	    }
	    return ans;
	}