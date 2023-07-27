#include<iostream>
#include<vector>
using namespace std;

void sort012(int a[], int n)
    {
        // code here 
        int s = 0;
        int e = n - 1;
        int mid = 0;
        while(mid <= e){
            if(a[mid] == 0){
              swap(a[mid], a[s]);
              s++;
              mid++;
            }
            else if(a[mid] == 1){
                mid++;
            }
            else{
                swap(a[mid], a[e]);
                e--;
            }
        }
    }