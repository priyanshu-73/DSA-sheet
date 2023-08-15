#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(), a.end());
        long long diff = LONG_MAX;
        long long s = 0;
        long long e = m - 1;
        while(s < n && e < n){
            diff = min(diff, a[e] - a[s]);
            s++;
            e++;
        }
        return diff;
    } 