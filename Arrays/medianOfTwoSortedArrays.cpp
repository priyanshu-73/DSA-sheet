#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void merge(vector<int>& array1, vector<int>& array2, vector<int> &arr){
        int m = array1.size();
        int n = array2.size();
        int indx1 = 0;
        int indx2 = 0;
        while(indx1 < m && indx2 < n){
            if(array1[indx1] < array2[indx2]){
                arr.push_back(array1[indx1]);
                indx1++;
            }
            else{
                arr.push_back(array2[indx2]);
                indx2++;
            }
        }
        
        while(indx1 < m){
            arr.push_back(array1[indx1]);
            indx1++;
        }
        while(indx2 < n){
            arr.push_back(array2[indx2]);
            indx2++;
        }
    }
    
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        vector<int> arr;
        merge(array1, array2, arr);
        int n = arr.size();
        if(n  % 2 == 0){
            double mid = (arr[(n / 2) - 1] + arr[(n / 2)])/2.0;
            return mid;
        }
        else{
            double mid = arr[n/2];
            return mid;
        }
    }