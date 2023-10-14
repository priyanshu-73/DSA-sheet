#include <bits/stdc++.h> 
using namespace std;

class Solution{
public:
    bool isSafe(int row, int col, vector<vector<int>> &board, int n){
    	int x = row;
    	int y = col;
    	while(y >= 0){
    		if(board[x][y] == 1)
    			return false;
    		y++;
    	}
    
    	x = row;
    	y = col;
    	while(x >= 0 && y >= 0){
    		if(board[x][y] == 1)
    			return false;
    		x--;
    		y--;
    	}
    
    	x = row;
    	y = col;
    	while(x < n && y >= 0){
    		if(board[x][y] == 1)
    			return false;
    		x++;
    		y--;
    	}
    	return true;
    }
    
    void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &board, int n){
		// base case
    	if(col == n){
    		vector<int> temp;
    		for(int col = 0; col < n; ++col){
    		    for(int row = 0; row < n; ++row){
    		        if(board[row][col] == 1)
    		            temp.push_back(row + 1);
    		    }
    		}
    		ans.push_back(temp);
    		return;
    	}
    
    	for(int row = 0; row < n; row++){
    		if(isSafe(row, col, board, n)){
				//if placing queen is safe
    			board[row][col] = 1;
				// backtrack
    			solve(col + 1, ans, board, n);
    			board[row][col] = 0;
    		}
    	}
    }
    
    vector<vector<int>> nQueen(int n)
    {
    	vector<vector<int>> board(n, vector<int> (n, 0));
    	vector<vector<int>> ans;
    	solve(0, ans, board, n);
    	return ans;
    }
};