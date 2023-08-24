#include<iostream>
using namespace std;

int lps(string s) {
	    int n = s.length();
	    int ls[n] = {0};
	    int i = 1, j = 0;
	    while(i < n){
	        if(s[i] == s[j]){
	            j++;
	            ls[i] = j;
	            i++;
	        }
	        else{
	            if(j == 0){
	                ls[i] = 0;
	                i++;
	            }
	            else{
	                j = ls[j - 1];
	            }
	        }
	    }
	    return ls[n - 1];
	}