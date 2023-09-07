#include<bits/stdc++.h>
using namespace std;

bool isPossible(int a[], int n, int par, int mid){
    int time = 0;
    int paratha = 0;
    for(int i = 0; i < n; i++){
        time = a[i];
        int j = 2;
        while(time <= mid){
            paratha++;
            time = time + (a[i]*j);
            j++;
        }
        if(paratha >= par) return true;
    }
    return false;
}

int main(){
    int par = 10;
    int n  = 4;
    int a[n] = {1, 2, 3, 4};
    int lb = 0;
    int ub = 1e8;
    int ans = 0;
    while(lb <= ub){
        int mid = lb + (ub - lb)/2;
        if(isPossible(a, n, par, mid)){
            ans = mid;
            ub = mid - 1;
        }
        else lb = mid + 1;
    }
    cout << ans << endl;
    return 0;
}