#include<iostream>
using namespace std;

#define m 26

int runCustomerSimulation(int n, string s){
	char seen[m] = {0};
	int res = 0, occupied = 0;
	for(int i = 0; i < s.length(); i++){
		int ind = s[i] - 'A';
		if(seen[ind] == 0){
			seen[ind] = 1;
			if(occupied < n){
				occupied++;
				seen[ind] = 2;
			}
			else{
				res++;
			}
		}
		else{
			if(seen[ind] == 2)
				occupied--;
			seen[ind] = 0;
		}
	}
	return res;
}

int main()
{
	cout << runCustomerSimulation(2, "ABBAJJKZKZ") << endl;
	cout << runCustomerSimulation(3, "GACCBDDBAGEE") << endl;
	cout << runCustomerSimulation(3, "GACCBGDDBAEE") << endl;
	cout << runCustomerSimulation(1, "ABCBCA") << endl;
	cout << runCustomerSimulation(1, "ABCBCADEED") << endl;
	return 0;
}