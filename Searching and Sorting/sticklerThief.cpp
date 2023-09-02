#include<iostream>
#include<algorithm>
using namespace std;

int FindMaxSum(int arr[], int n)
    {
        if(n == 1) return arr[0];
        
        int a = 0, b = arr[0];
        for(int i = 2; i <= n; i++){
            int c = max(b, a + arr[i - 1]);
            a = b;
            b = c;
        }
        return b;
    }