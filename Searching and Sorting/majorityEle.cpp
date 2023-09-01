#include<iostream>
using namespace std;

int majorityElement(int a[], int size)
{
        
    int Maj=-1,vote=0;
        
    for(int i=0;i<size;i++){
        
        if(vote == 0){
            Maj = a[i];
            vote=1;
        }
        
        else if(a[i] != Maj)
            vote--;
        else
            vote++;
            
       
    }
    
    int cnt=0;
    for(int i=0;i<size;i++)
        if(a[i] == Maj)
            cnt++;
            
    return cnt>(size/2)?Maj:-1;
    
}