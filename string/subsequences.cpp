#include<iostream>
#include<vector>
using namespace std;

void solve(string s, vector<string> &ans, string output, int index){
    if(index >= s.length()){
        if(output.length() > 0)
            ans.push_back(output);
        return;
    }

    //exclude
    solve(s, ans, output, index + 1);

    //include
    char ch = s[index];
    output.push_back(ch);
    solve(s, ans, output, index + 1);
}

vector<string> printSubsequence(string s){
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(s, ans, output, index);
    return ans;
}

int main(){
    string s = "abc";
    vector<string> ans = printSubsequence(s);
    for(auto i : ans)
        cout << i << endl;
}