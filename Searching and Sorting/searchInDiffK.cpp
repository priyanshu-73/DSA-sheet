#include<iostream>
using namespace std;

int search(int arr[], int n, int x, int k)
{
  int ans = -1;
  for(int  i = 0; i < n; i++){
      if(arr[i] == x){
        ans = i;
        break;
      }
  }  	
  return ans;
}