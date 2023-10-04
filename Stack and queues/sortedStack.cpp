#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

void insert(stack<int> &s, int temp){
    if(s.empty() || s.top() <= temp){
        s.push(temp);
        return;
    }
    
    int num = s.top();
    s.pop();
    insert(s, temp);
    s.push(num);
}

void SortedStack :: sort()
{
   if(s.empty() || s.size() == 1) return;
   
   int temp = s.top();
   s.pop();
   sort();
   insert(s, temp);
}