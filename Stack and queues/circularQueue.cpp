#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

class cQueue{
    public:
        int front, rear;
        int size;
        int *arr;
    cQueue(int s){
        front = rear = -1;
        size = s;
        arr = new int(size);
    }

    void push(int d){
        if(front == 0 and rear == size - 1){
            cout << "Queue if full" << endl;
            return;
        }

        if(front == -1 && rear == -1){
            front = 0;
            rear = 0;
            arr[rear] = d;
        }

        else if(rear == size - 1 && front != 0){
            rear = 0;
            arr[rear] = d;
        }

        else{
            rear++;
            arr[rear] = d;
        }
    }

    void pop(){
        if(front == -1){
            cout << "Underflow" << endl;
            return;
        }

        if(front == rear){
            front = -1;
            rear = -1;
        }
        else if(front == size - 1){
            front = 0;
        }
        else{
            front++;
        }
        return;
    }

    int top(){
        return arr[front];
    }
};

int main(){
    cQueue q(5);
    q.push(5);
    q.push(9);
    q.push(10);
    cout << q.top() << endl;
}
