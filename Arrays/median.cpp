#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int find_median(vector<int> v)
{
		// Code here.
    sort(v.begin(), v.end());
    int n = v.size();
    if(n % 2 == 0){
	    int mid = (v[(n-1) / 2] + v[(n-1)/2 + 1])/2;
    	    return mid;
    }
    else{
        int mid = (n / 2);
        return v[mid];
    }
}