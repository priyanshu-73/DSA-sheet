#include<iostream>
using namespace std;


int minChar(string str){
        //Write your code here
        int n=str.size();
        int answer=n-1;
        int i=0,j=n-1;
        while(i<=j){
            if(str[i]!=str[j]){
                i=0;
                answer--;
                j=answer;
            }
            else{
                i++;
                j--;
            }
        }
    return n-answer-1;
    }