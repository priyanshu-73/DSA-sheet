#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;

long long int findSubarray(vector<long long int> &arr, int n ) {
        long long int result = 0;
        unordered_map<long long int, int> freq;
        long long int sum = 0;
        freq[0]++;
        for(int i = 1; i <= n; i++){
            sum += arr[i-1];
            freq[sum]++;
            result += freq[sum] - 1;
        }
        return result;
    }