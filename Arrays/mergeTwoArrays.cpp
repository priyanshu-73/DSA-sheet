#include<iostream>
#include<algorithm>
using namespace std;


void merge(long long arr1[], long long arr2[], int n, int m) 
    { 
    int right = n - 1;
    int left = 0;
    while(left < m && right >= 0){
    if(arr1[right] > arr2[left]){
            swap(arr1[right], arr2[left]);
            left++;
            right--;
        }
        else{
            break;
        }
    }        
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
} 

