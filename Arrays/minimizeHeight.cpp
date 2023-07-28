#include<iostream>
#include<algorithm>
using namespace std;


int getMinDiff(int arr[], int n, int k) {
        // code here
    sort(arr, arr + n);
    int res = arr[n - 1] - arr[0];
    int smallest = arr[0] + k;
    int largest = arr[n - 1] - k;
    int mini, maxi;
        
    for(int i = 0; i < n - 1; i++){
        maxi = max(arr[i] + k, largest);
        mini = min(arr[i + 1] - k, smallest);
        if(mini < 0)
            continue;
        
        res = min(res, maxi - mini);
    }
    return res;
}