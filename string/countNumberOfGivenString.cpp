#include<iostream>
#include<vector>
using namespace std;

int solve(int i, int j, vector<string> s, string word, int indx){
	int n = s.size();
	int found = 0;
	if(i >= 0 && j >= 0 && i < n && j < n && s[i][j] == word[indx]){
		char temp = word[indx];
		s[i][j] = 0;
		indx++;
		if(indx == n)
			found = 1;
		else{
			found += solve(i + 1, j, s, word, indx);
			found += solve(i - 1, j, s, word, indx);
			found += solve(i , j + 1, s, word, indx);
			found += solve(i , j - 1, s, word, indx);
		}
	}
	return found;
}

int main(){
	vector<string> s = { "BBABBM",
                         "CBMBBA",
                         "IBABBG",
                         "GOZBBI",
                         "ABBBBC",
                         "MCIGAM" };
	string word = "MAGIC";
	int ans = 0;
	for(int i = 0; i < s.size(); i++){
		for(int j = 0; j < s[0].size(); j++){
			ans += solve(i, j, s, word, 0);
		}
	}
	cout << ans << endl;
}