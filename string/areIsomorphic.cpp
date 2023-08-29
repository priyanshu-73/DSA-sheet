#include<iostream>
#include<vector>
using namespace std;

bool areIsomorphic(string str1, string str2)
    {
        if(str1.size() != str2.size()) return 0;
        unordered_map <char,int> m1,m2;
        for(int i = 0;i < str1.size();i++){
            if(m1[str1[i]] != m2[str2[i]]) return 0;
            m1[str1[i]] = i+1;
            m2[str2[i]] = i+1;
        }
        return 1;
    }