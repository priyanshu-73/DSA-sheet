#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){
        int painter = 1;
        long long lengthSum = 0;
        for(int i = 0; i < n; i++){
            if(lengthSum + arr[i] <= mid){
                lengthSum += arr[i];
            }
            else{
                painter++;
                if(painter > k || arr[i] > mid)
                    return false;
                lengthSum = arr[i];
            }
        }
        return true;
    }
    
    long long minTime(int arr[], int n, int k)
    {
        long long ans = -1;
        long long int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }
        long long s = 0;
        long long e = sum;
        long long mid = s + (e - s)/2;
        while(s <= e){
            if(isPossible(arr, n, k, mid)){
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