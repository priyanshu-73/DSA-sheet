#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int student = 1;
    int pageSum = 0;
    for(int i = 0; i < n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            student++;
            if(student > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}
    
int findPages(int arr[], int n, int m) 
{
    if(m > n)
        return -1;
    int ans = -1;
    int s = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    if(m == 1)
        return sum;
    int e = sum;
    int mid = s + (e - s)/2;
    while(s <= e){
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s)/2; 
    }
        return ans;
}