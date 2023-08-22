#include<unordered_map>
#include<iostream>
#include<vector>
using namespace std;

void printDuplicates(string str){
    unordered_map<char, int> mp;

    for(int i = 0; i < str.size(); i++){
        mp[str[i]]++;
    }

    for(auto it : mp){
        if(it.second > 1)
            cout << it.first << " " << it.second << endl;
    }
}


int main(){
    string str = "geeksforgeeks";
    printDuplicates(str);
}