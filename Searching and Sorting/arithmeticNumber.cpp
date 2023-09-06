#include<iostream>

int inSequence(int A, int B, int C){
    if(A == B && C == 0)
        return 1;
        
    double n = (double) (B - A)/C + 1;
        
    if(n != int(n))
    return 0;
    return n > 0 ? 1 : 0;
}