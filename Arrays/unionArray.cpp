#include<iostream>
#include<set>
using namespace std;

int main(){
    int arr[5] = {1, 1, 2, 3, 3};
    int arr1[6] = {2, 4, 5, 6, 6, 7};

    // union
    int i = 0;
    int j = 0;
    int count = 0;
    while(i < 5 && j < 6){
        if(arr[i] < arr1[j]){
            count++;
            i++;
            if(arr[i] == arr[i - 1]){
                i++;
            }
        }

        else if(arr[i] > arr[j]){
            count++;
            j++;
            if(arr[j] == arr[j - 1]){
                j++;
            }
        }

        else{
            count++;
            i++;
            j++;
            if(arr[i] == arr[i - 1]){
                i++;
            }
            if(arr[j] == arr[j - 1]){
                j++;
            }
        }
    }

    while(i < 5){
        if(arr[i] == arr[i - 1]){
                i++;
        }
        else{
            count++;
            i++;
        }
    }

    while(j < 6){
        if(arr[j] == arr[j - 1]){
                j++;
        }
        else{
            count++;
            j++;
        }
    }
    cout << count << endl;

}