#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int front = 0;
        int back = s.size() - 1;
        while(front < back){
            swap(s[front], s[back]);
            front++;
            back--;
        }  
    }
};