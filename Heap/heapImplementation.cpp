#include<iostream>
using namespace std;

class heap{
    public:
        int arr[100000];
        int size;

        heap(){
            arr[0] = -1;
            size = 0;
        }

        void insert(int d){
            size = size + 1;
            int index = size;
            arr[index] = d;
            while(index > 1){
                int parent = index / 2; 
                if(arr[parent] < arr[index]){
                    swap(arr[parent], arr[index]);
                    index = parent;
                }
                else 
                    return;
            }
        }

        void print(){
            for(int i = 1; i <= size; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        void pop(){
            if(size == 0)
                return;

            arr[1] = arr[size];
            size--;
            int i = 1;
            while(i < size){
                int left = 2*i;
                int right = 2*i+1;
                if(left < size and arr[i] < arr[left]){
                    swap(arr[i], arr[left]);
                    i = left;
                }
                else if(right < size and arr[i] < arr[right]){
                    swap(arr[i], arr[right]);
                    i = right;
                }
                else 
                return;
            }
        }
};

int main(){
    heap h;
    h.insert(1);
    h.insert(3);
    h.insert(5);
    h.insert(4);
    h.insert(6);
    h.pop();
    h.print();
}
