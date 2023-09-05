#include<algorithm>
#include<iostream>
using namespace std;

// set bits means bits with more number of 1's

static bool comp(int a,int b){
    return __builtin_popcount(a)>__builtin_popcount(b); // to find set bits
}
void sortBySetBitCount(int arr[], int n)
{
   // Your code goes here
   stable_sort(arr,arr+n,comp);
}