#include<iostream>
#include<vector>
using namespace std;

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int i = 0; 
	    int j = m - 1;
	    int ans = -1;
	    while(i < n && j >= 0){
	        if(arr[i][j] == 0)
	            i++;
	        else{
	            ans = i;
	            j--;
	        }
	    }
	    return ans;
	}