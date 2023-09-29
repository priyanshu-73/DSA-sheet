#include<iostream>
using namespace std;

class queue{
    public:
        int front, rear;
        int *arr;
        int size;
    
    queue(int s){
        this -> size = s;
        arr = new int(size);
        front = 0;
        rear = 0;
    }

    void push(int d){
        if(rear == size){
            cout << "overflow" << endl;
            return;
        }

        arr[rear] = d;
        rear++;
    }

    void pop(){
        if(front == rear){
            cout << "Underflow" << endl;
            return;
        }
        arr[front] = -1;
        front++;
        if(front == rear){
            front = 0;
            rear = 0;
        }
    }

    int top(){
        if(front == rear){
            cout << "queue is empty" << endl;
            return 0;
        }
        return arr[front];
    }
    int bottom(){
        return arr[rear - 1];
    }

    bool isEmpty(){
        if(front == -1)
            return true;
        return false;
    }
};

int main(){
    queue q(5);
    q.push(22);
    q.push(33);
    q.push(44);
    q.push(55);
    q.push(77);

    cout << q.bottom() << endl;
    q.pop();
    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;
}