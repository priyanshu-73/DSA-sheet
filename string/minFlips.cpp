#include<iostream>
using namespace std;

int minFlips (string s)
{
    int a = 0, b = 0, n = s.length();
    for(int i = 0; i < n; i++){
        if((i%2 && s[i] == '1') || (i%2 == 0 && s[i] == '0')) a++;
    }
    for(int i = 0; i < n; i++){
        if((i%2 && s[i] == '0') || (i%2 == 0 && s[i] == '1')) b++;
    }
    return min(a, b);
}