#include<iostream>
using namespace std;

int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i = 0, j = 0;
        int cnt = 0;
        while(i < n && j < m){
            if(arr1[i] < arr2[j]){
                cnt++;
                if(cnt == k){
                    return arr1[i];
                }
                i++;
            }
            else if(arr2[j] <= arr1[i]){
                cnt++;
                if(cnt == k){
                    return arr2[j];
                }
                j++;
            }
        }
        while(i < n){
            cnt++;
            if(cnt == k){
                return arr1[i];
            }
            i++;
        }
        while(j < m){
            cnt++;
            if(cnt == k){
                return arr2[j];
            }
            j++;
        }
        return -1;
    }