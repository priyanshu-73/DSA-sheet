#include<iostream>
using namespace std;

int countSquares(int N) {
    int count = 0;
    for(int i = 1; i < N; i++){
        int sqrt = i * i;
        if(sqrt < N)
            count++;
        else{
            break;
        }
    }
    return count;
}