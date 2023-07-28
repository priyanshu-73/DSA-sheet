#include<iostream>
using namespace std;


void rotate(int arr[], int n)
{
    int i = 0;
    while(i < n){
        swap(arr[i], arr[n - 1]);
        i++;
    }
}