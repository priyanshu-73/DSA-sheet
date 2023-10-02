#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int start = 0, end = n - 1;
        while(start < end){
            if(M[start][end] == 1) start++;
            
            else end--;
        }
        
        for(int i = 0; i < n; i++){
            if(i != start){
                if(M[i][start] == 0 || M[start][i] == 1)
                    return -1;
            }
        }
        return start;
    }
};