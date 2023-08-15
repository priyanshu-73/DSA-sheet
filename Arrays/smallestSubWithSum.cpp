#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;


int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        
        int count=INT_MAX;
        
        int i=0 , j=0 ;
        
        long long sum=arr[0];
        while(j<n && i<n)
        {
            if(sum<=x)
            {
                j++;
                sum+=arr[j];
            }
            else
            {
                count=min(count,j-i+1);
                sum-=arr[i];
                i++;
            }
            
        }
        if(count==INT_MAX)
        {
            return 0;
        }
        return count;
    }