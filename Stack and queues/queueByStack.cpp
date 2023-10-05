#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

class StackQueue{
    private:
    stack<int> s1;
    stack<int> s2;
    public:
    void push(int B);
    int pop();
};

void StackQueue :: push(int x)
{
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
    while(s1.size() != 1){
        s2.push(s1.top());
        s1.pop();
    }       
    int c = s1.top();
    s1.pop();
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
    return c;
}

int main(){
    StackQueue *sq = new StackQueue();

    sq->push(10);
    sq->push(11);
    cout << sq->pop() << endl;
}