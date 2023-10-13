#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    bool isSafe(int i, int j, vector<vector<bool>> isVisited, vector<vector<int>> &m, int n){
        if(i < n && j < n && i >= 0 && j >= 0 && isVisited[i][j] == false && m[i][j] == 1)
            return true;
        else 
            return false;
    }
    
    void solve(int i, int j, int n, vector<vector<int>> &m, string path, vector<vector<bool>> &isVisited, vector<string> &ans){
        if(i == n - 1 && j == n - 1){
            ans.push_back(path);
            return;
        }
        
        isVisited[i][j] = 1;
        if(isSafe(i + 1, j, isVisited, m, n))
            solve(i + 1, j, n, m, path + 'D', isVisited, ans);
        if(isSafe(i, j + 1, isVisited, m, n))
            solve(i, j + 1, n, m, path + 'R', isVisited, ans);
        if(isSafe(i, j - 1, isVisited, m, n))
            solve(i, j - 1, n, m, path + 'L', isVisited, ans);
        if(isSafe(i - 1, j, isVisited, m, n))
            solve(i - 1, j, n, m, path + 'U', isVisited, ans);
        isVisited[i][j] = 0;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        string path = "";
        vector<vector<bool>> isVisited(n, vector<bool>(n, 0));
        if(m[0][0] == 0){
            return ans;
        }
        
        solve(0, 0, n, m, path, isVisited, ans);
        return ans;
    }
};

    