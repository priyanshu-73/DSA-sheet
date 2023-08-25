#include<iostream>
using namespace std;

int value(char ch){
       if(ch == 'I') return (1);
       if(ch == 'V') return (5);
       if(ch == 'X') return (10);
       if(ch == 'L') return (50);
       if(ch == 'C') return (100);
       if(ch == 'D') return (500);
       if(ch == 'M') return (1000);
       return (0);
   }
  
    int romanToDecimal(string &str) {
        // code here
        int n = str.length();
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(i < n - 1 && value(str[i]) < value(str[i + 1])){
                ans += value(str[i + 1]) - value(str[i]);
                i++;
            }
            else{
                ans += value(str[i]);
            }
        }
        return ans;
    }