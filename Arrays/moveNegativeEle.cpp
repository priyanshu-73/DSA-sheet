#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[8] = {1, 2, 3, -1, -2, 4, 5, -3};
    int low = 0;
    int high = 7;
    while(low < high){
        if(arr[low] < 0){
            low++;
        }

        else if(arr[high] > 0){
            high--;
        }

        else{
            swap(arr[low], arr[high]);
        }
    }
    for(int i = 0; i < 8; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}