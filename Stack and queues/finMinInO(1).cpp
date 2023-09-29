#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int mini;
void push(stack<int>& s, int a){
	if(s.empty()){
	    mini = a;
	    s.push(a);
	}
	else{
	    mini = min(mini, a);
	    s.push(a);
	}
}

bool isFull(stack<int>& s,int n){
	return s.size() == n;
}

bool isEmpty(stack<int>& s){
	return s.empty();
}

int pop(stack<int>& s){
	s.pop();
}

int getMin(stack<int>& s){
	return mini;
}