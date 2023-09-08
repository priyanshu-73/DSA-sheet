#include<bits/stdc++.h>
using namespace std;

void mergeSort(vector<int> &arr1, vector<int> &arr2){
    int i = arr1.size() - 1;
    int j = 0;
    while(i >= 0 && j < arr2.size()){
        if(arr1[i] > arr2[j]){
            swap(arr1[i], arr2[j]);
            i--;
            j++;
        }
        else{
            i--;
            j++;
        }
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
}

int main(){
    vector<int> arr1 = {12, 13, 14, 15};
    vector<int> arr2 = {1, 2, 3, 4, 5};
    mergeSort(arr1, arr2);
    for(auto i : arr1){
        cout << i << " ";
    }
    cout << endl;
    for(auto i : arr2){
        cout << i << " ";
    }
    cout << endl;
}