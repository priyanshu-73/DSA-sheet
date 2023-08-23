#include<iostream>
#include<vector>
using namespace std;

int maxSubStr(string str){
    int one = 0, zero = 0, ans = 0;
    for(auto i : str){
        i == '1' ? one++ : zero++;
        if(one == zero)  ans++;
    }
        
    return one != zero ? -1 : ans;
}

int main(){
    string s = "0011110001";
    int ans = maxSubStr(s);
    cout << ans << endl;
}