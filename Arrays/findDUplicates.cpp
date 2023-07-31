#include<iostream>
#include<vector>
#include<map>
using namespace std;


int findDuplicate(vector<int>& nums) {
    map<int, bool> mark;
    for(int i = 0; i < nums.size(); i++){
        if(mark[nums[i]] == true){
            return nums[i];
        }
        mark[nums[i]] = true;
    }
    return -1;
}

