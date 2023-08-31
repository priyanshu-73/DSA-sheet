#include<vector>
#include<iostream>
using namespace std;

vector<int> findTwoElement(vector<int> arr, int n) {
        vector<int> ans;
        long long N = n;
        int missing = 0, repeating = 0;
        long long s = (N * (N + 1))/2;
        long long p = (N * (N + 1) * (2 * n + 1))/6;
        for(int i = 0; i < N; i++){
            s -= (long long) arr[i];
            p -= (long long) arr[i] * (long long) arr[i];
        }
        missing = (s + (p/s)) / 2;
        repeating = missing - s;
        ans.push_back(repeating);
        ans.push_back(missing);
        return ans;
    }