#include<vector>
#include<iostream>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n) {
	vector<int> ans;
    int i = 0;
	while(i <= n){
        if(arr[i] == i + 1)
	        ans.push_back(arr[i]);
	    i++;
    }
	return ans;
}