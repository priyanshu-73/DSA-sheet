#include<vector>
#include<iostream>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long int> result(n, 1);
        
        long long int left_product = 1;
        for (int i = 0; i < n; i++) {
            result[i] *= left_product;
            left_product *= nums[i];
        }
        
        long long int right_product = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= right_product;
            right_product *= nums[i];
        }
        
        return result;
    }