#include<iostream>
#include<algorithm>
using namespace std;

bool findPair(int arr[], int size, int n){
    int i = 0, j = 1;
    sort(arr, arr + size);
    while(i < size && j < size){
        if(arr[j] - arr[i] == n && i != j)
            return true;
        if(arr[j] - arr[i] < n)
            j++;
        else
            i++;
    }
    return false;
}