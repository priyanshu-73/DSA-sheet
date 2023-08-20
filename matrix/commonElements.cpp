#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
using namespace std;

set<int> commonElements(vector<vector<int>> mat){
    unordered_map<int, int> mp;
    set<int> ans;
    for(int j = 0; j < mat[0].size(); j++){
        mp[mat[0][j]] = 1;
    }

    for(int i = 1; i < mat.size(); i++){
        for(int j = 0; j < mat[0].size(); j++){
            if(mp[mat[i][j]] == i){
                mp[mat[i][j]] = i + 1;
                if(i == mat.size() - 1 && mp[mat[i][j]] == mat.size()){
                    ans.insert(mat[i][j]);
                }
            }
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> arr = {{1, 2, 1, 4, 8},
                                {3, 7, 8, 5, 1},
                                {8, 7, 7, 3, 1},
                                {8, 1, 2, 7, 9},
                                };
    set<int> ans = commonElements(arr);
    for(auto it : ans){
        cout << it << " ";
    }
}