#include<iostream>
using namespace std;

class Solution
{
    private: 
    bool isFact(int mid, int n){
        int ans = 0;
        
        for(int i = 5; i<=mid; i *= 5){
            ans += mid/i;
        }
        
        if(ans >= n) return true;
        else return false;
    }
    public:
        int findNum(int n)
        {
        
            int low = 0;
            int high = 5*n;
            int ans  = -1;
            while(low <= high){
                int mid = low + (high - low)/2;
                
                if(isFact(mid, n)){
                    ans = mid;
                    high = mid - 1;
                }else low = mid + 1;
            }
            
            return ans;
        }
};