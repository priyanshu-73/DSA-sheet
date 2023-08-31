#include<iostream>
#include<limits.h>
using namespace std;

int middle(int A, int B, int C){
        
        int mini = min(A, min(B, C));
        int maxi = max(A, max(B, C));
        return (A+B+C) - (maxi + mini);      
    }