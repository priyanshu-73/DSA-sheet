#include<iostream>
using namespace std;

long long trappingWater(int arr[], int n){
        // code here
        int leftmax[n];
        int lm = arr[0];
        for(int i=0;i<n;i++){
            if(lm<arr[i]){
                lm = arr[i];
            }
            leftmax[i] = lm;
        }
        
        int rightmax[n];
        int rm = arr[n-1];
        for(int i=n-1;i>=0;i--){
            if(rm<arr[i]){
                rm = arr[i];
            }
            rightmax[i] = rm;
        }
        
        long long tw = 0;
        for(int i=0;i<n;i++){
            tw+=min(leftmax[i],rightmax[i]) - arr[i];
        }
        
        return tw;
    }