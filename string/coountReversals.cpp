#include<iostream>
using namespace std;

int countReversals(string s){
	int n = s.length();
	if(n % 2 != 0)
		return -1;

	int open = 0, close = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == '{')
			open++;
		else
			open--;
		if(open < 0){
			close++;
			open = 1;
		}
	}
	return close + open/2;
}

int main(){
	string input = "}{{}}{{{";
	cout << countReversals(input) << endl;
}