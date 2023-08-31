#include<vector>
#include<iostream>
using namespace std;

vector<int> find(int arr[], int n , int x )
    {
        vector<int> ans;
        int i = 0; 
        int j = n - 1;
        int res = -1;
        while(i <= j){
            int mid = i + (j - i)/2;
            if(x == arr[mid]){
                res = mid;
                j = mid - 1;
            }
            else if(arr[mid] > x){
                j = mid - 1;
            }
            else
                i = mid + 1;
        }
        ans.push_back(res);
        
        i = 0;
        j = n - 1;
        while(i <= j){
            int mid = i + (j - i)/2;
            if(x == arr[mid]){
                res = mid;
                i = mid + 1;
            }
            else if(arr[mid] > x){
                j = mid - 1;
            }
            else
                i = mid + 1;
        }
        ans.push_back(res);
        return ans;
    }