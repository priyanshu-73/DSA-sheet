#include<iostream>
#include<vector>
using namespace std;

string removeConsecutiveCharacter(string S)
    {
        string ans = "";
        for(int i = 0; i < S.length(); i++){
            if(S[i] != S[i + 1])
                ans += S[i];
        }
        return ans;
    }