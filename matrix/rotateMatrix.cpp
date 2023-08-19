#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateMatrix(vector<vector<int>> &matrix){
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < i; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    int s = 0;
    for(int i = 0; i < matrix[0].size(); i++){
        for(int j = matrix.size() - 1; j >= s; j--){
            swap(matrix[i][s], matrix[i][j]);
            s++;
        }
        s = 0;
    }
}

int main(){
    vector<vector<int>> matrix = { { 1, 2, 3, 4 },
                                    { 5, 6, 7, 8 },
                                    { 9, 10, 11, 12 },
                                    { 13, 14, 15, 16 } };
    rotateMatrix(matrix);
    for(auto it : matrix){
        for(auto ele : it){
            cout << ele << " ";
        }
        cout << endl;
    }
}