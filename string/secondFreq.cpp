#include<iostream>
#include<unordered_map>
#include<limits.h>
using namespace std;

string secFrequent (string arr[], int n)
    {
        unordered_map <string, int> m;
    
        for (int i = 0; i < n; ++i)
            m[arr[i]]++;

        int mx1 = INT_MIN, mx2 = INT_MIN;
    
        for (auto i : m)
        {
            if (i.second > mx1)
            {
                mx2 = mx1;
                mx1 = i.second;
            }
            else if (i.second > mx2)
            {
                mx2 = i.second;
            }
        }
        
        for (auto i : m)
            if (i.second == mx2)
                return i.first;
        
        return "";
    }