#include<iostream>
using namespace std;


int minJumps(int arr[], int n){
    // Your code here
    int jump = 0;
    int curr = 0;
   int farthest = 0;
    for(int i = 0; i < n; i++){
        farthest = max(farthest, arr[i] + i);
            
        if(i == curr){
            curr = farthest;
            jump++;
        }
            
        if(curr >= n - 1){
            return jump;
        }
    }
    return -1;
}
int main(){
    int arr[4] = {1, 5, 8, 10};
    int n = 4;
    cout << minJumps(arr, n) << endl;
}