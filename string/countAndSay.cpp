#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    string build(string s){
        int frq = 1;
        char currNum = s[0];
        string result = "";
        for(int i = 1; i < s.length(); i++){
            if(currNum == s[i]){
                frq++;
            }
            else{
                char freq = (char) ('0' + frq);

                result.push_back(freq);
                result.push_back(currNum);

                frq = 1;
                currNum = s[i];
            }
        }
        char freq = (char) ('0' + frq);

        result.push_back(freq);
        result.push_back(currNum);
        return result;

    }

    string countAndSay(int n) {
        string s = "1";
        for(int i = 0; i < n - 1; i++){
            s = build(s);
        }
        return s;
    }
};