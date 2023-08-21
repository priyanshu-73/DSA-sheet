#include<iostream>
using namespace std;

int isPalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while(i <= j){
        if(s[i] != s[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}