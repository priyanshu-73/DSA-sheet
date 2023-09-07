#include<bits/stdc++.h>
using namespace std;

int doubleHelix(vector<int> first, vector<int> second, unordered_map<int, int> mp){
    int sum1 = 0;
    int sum2 = 0;
    int ans = 0;
    int i = 0, j = 0;
    while(i < first.size() && j < first.size()){
        if(first[i] < second[i]){
            sum1 += first[i];
            i++;
        }
        else if(second[j] < first[i]){
            sum2 += second[j];
            j++;
        }
        else{
            ans = ans + max(sum1, sum2) + first[i];
            sum1 = sum2 = 0;
            i++;
            j++;
        }
    }

    while(i < first.size()){
        sum1 += first[i++];
    }
    while(j < second.size()){
        sum2 += second[j++];
    }
    ans = ans + max(sum1, sum2);
    return ans;
}

int main(){
    vector<int> first = { -5, 100, 1000, 1005};
    vector<int> second = {-12, 1000, 1001};
    unordered_map<int, int> mp;
    for(int i = 0; i < first.size(); i++){
        mp[first[i]]++;
    }

    for(int i = 0; i < second.size(); i++){
        mp[second[i]]++;
    }

    cout << doubleHelix(first, second, mp) << endl;
}