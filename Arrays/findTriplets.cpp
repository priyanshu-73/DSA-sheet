#include<iostream>
#include<algorithm>
using namespace std;

bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        int start =0;
        while(start<n){
            int one = start+1;
            int two = n-1;
            while(one<two){
                if(A[start]+A[one]+A[two]==X){
                    return true;
                }
                if(A[start]+A[one]+A[two]<X){
                    one++;
                }
                if(A[start]+A[one]+A[two]>X){
                    two--;
                }
            }
            start++;
        }
        return false;
    }