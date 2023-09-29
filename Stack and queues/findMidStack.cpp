#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int findMid(stack<int> s){
    if(s.empty()) return 0;
    vector<int> ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    reverse(ans.begin(), ans.end());
    int mid = (0 + ans.size())/2;
    if(ans.size() % 2 == 0)
    return ans[mid - 1];

    return ans[mid];
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << findMid(s) << endl;
}