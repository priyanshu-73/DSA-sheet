#include<iostream>
#include<algorithm>
using namespace std;

long long countTriplets(long long arr[], int n, long long sum)
	{
	    sort(arr, arr + n);
	    long long count = 0;
	    for(int i = 0; i < n - 2; i++){
	        int l = i + 1, r = n - 1;
	        while(l < r){
	            if(arr[i] + arr[l] + arr[r] >= sum)
	                r--;
	            else{
	                count += r - l;
	                l++;
	            }
	        }
	    }
	    return count;
	}