#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int mini = INT_MAX;
    int ans = 0;
    int indx = 0;
    int sum = 0;
    while(indx < prices.size()){
        mini = min(prices[indx], mini);
        sum = prices[indx] - mini;
        ans = max(ans, sum);
        indx++;
    }
    return ans;
}

