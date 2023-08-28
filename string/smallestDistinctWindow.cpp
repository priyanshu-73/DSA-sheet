#include<iostream>
#include<limits.h>
#include<set>
#include<unordered_map>
using namespace std;

int findSubString(string str)
    {
        set<char> s;
        int n = str.length();
        for(int i = 0; i < n; i++){
            s.insert(str[i]);
        }
        
        int j = 0, minLen = INT_MAX;
        unordered_map<char, int> mp;
        for(int i = 0; i < n; i++){
            mp[str[i]]++;
            while(j <= i && mp.size() == s.size()){
                minLen = min(minLen, i - j + 1);
                mp[str[j]]--;
                if(mp[str[j]] == 0){
                    mp.erase(str[j]);
                }
                j++;
            }
        }
        return minLen;
    }