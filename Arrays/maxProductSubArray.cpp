#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;


class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long prefix = 1;
	    long long suffix = 1;
	    long long ans = INT_MIN;
	    for(int i = 0; i < n; i++){
	        if(prefix == 0) prefix = 1;
	        if(suffix == 0) suffix = 1;
	        
	        prefix *= arr[i];
	        suffix *= arr[n - i - 1];
	        ans = max(ans, max(prefix, suffix));
	    }
	    return ans;
	}
};