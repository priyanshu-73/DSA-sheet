#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

class Solution
{
    public:
    vector<int> prevSmallerEle(long long arr[], int n)
    {
        vector<int> v;
        stack<pair<long long, int>> st;
        
        for(int i=0;i<n;i++)
        {
            while(!st.empty() and st.top().first>=arr[i])
            st.pop();
            
            st.empty()? v.push_back(-1): v.push_back(st.top().second);
            st.push({arr[i],i});
        }
        return v;
    }
    
    
    vector<int> nextSmallerEle(long long arr[], int n)
    {
        vector<int> v;
        stack<pair<long long, int>> st;
        
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() and st.top().first>=arr[i])
            st.pop();
            
            st.empty()? v.push_back(n): v.push_back(st.top().second);
            st.push({arr[i],i});
        }
        reverse(v.begin(), v.end());
        return v;
    }
    
    
    long long getMaxArea(long long arr[], int n)
    {
        vector<int> left = prevSmallerEle(arr,n);
        vector<int> right = nextSmallerEle(arr,n);
        long long area = INT_MIN;
        
        for(int i = 0; i < n; i++)
        {
            long long l = arr[i];
            long long b = right[i] - left[i] - 1;
            
            long long newArea = l*b;
            area = max(area, newArea);
        }
        return area;
    }
};