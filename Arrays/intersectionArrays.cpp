#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 1, 2, 3, 3};
    int arr1[6] = {1, 2, 2, 3, 6, 7};
    int n = 5;
    int m = 6;
    int indx = 0;
    int indx1 = 0;
    int count = 0;

    while(indx < n && indx1 < m){
        if(arr[indx] < arr1[indx1]){
            indx++;
            if(arr[indx] == arr[indx - 1]){
                indx++;
            }
        }
        else if(arr[indx] > arr1[indx1]){
            indx1++;
            if(arr1[indx1] == arr1[indx1 - 1]){
                indx1++;
            }
        }
        else{
            count++;
            indx++;
            indx1++;
            if(arr[indx] == arr[indx - 1]){
                indx++;
            }
            if(arr1[indx1] == arr1[indx1 - 1]){
                indx1++;
            }
        }
    }
    cout << count << endl;
}