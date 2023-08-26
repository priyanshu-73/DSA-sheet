#include<iostream>
#include<vector>
using namespace std;

int minimumNumberOfSwaps(string S){
    int res = 0, val = 0;
    for(auto x : S){
        if(x == '[')
            val++;
        else{
            val--;
            if(val < 0)
                res -= val;
        }
    }
    return res;
}