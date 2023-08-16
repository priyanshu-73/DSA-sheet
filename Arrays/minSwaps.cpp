#include<iostream>
#include<limits.h>
using namespace std;

int minSwap(int arr[], int n, int k) {
        // Complet the function
        int count=0;
        for(int i=0 ; i<n ; i++)
            if(arr[i]<=k)
                count++; 
        
        int swap=0;
        
        for( int i= 0 ; i < count ; i++)
        if(arr[i]>k)
        swap++;
        
        // we get the size of subarray
        
        int i=0, j = count;
        int mi= swap;
        
        while(j<n)
        {
            if(arr[i]>k)
            swap--;
            if(arr[j]>k)
            swap++;
            
            mi= min( mi , swap);
            
            i++;
            j++;
        }
        return mi;
    }