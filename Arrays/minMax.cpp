#include<iostream>
#include<limits.h>
using namespace std;

int findSum(int A[], int N)
    {
    	//code here.
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i < N ; i++){
        if(A[i] < min){
            min = A[i];
        }
        
	    if(A[i] > max){
            max = A[i];
	    }
	}
    	
	int ans = min + max;
	return ans;
}