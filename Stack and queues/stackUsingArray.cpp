#include<iostream>
#include<vector>
using namespace std;

class stack{
    //properties
    public:
    int top;
    int *arr;
    int size;

    stack(int s){
        this -> size = s;
        top = -1;
        arr = new int[size];
    }

    void push(int d){
        if(top == size - 1){
            cout << "stack overflow" << endl;
            return;
        }
        
        top++;
        arr[top] = d;
    }

    void pop(){
        if(top == -1){
            cout << "Stack is empty" << endl;
            return;
        }

        top--;
    }

    int peak(){
        return arr[top];
    }

    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }
};

int main(){
    stack st(5);

    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);
    st.push(66);
    st.push(77);

    cout << st.peak() << endl;
    st.pop();
    cout << st.peak() << endl;
}