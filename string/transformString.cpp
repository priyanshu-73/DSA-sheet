#include<unordered_map>
#include<iostream>
using namespace std;

int transformString(string s1, string s2){
	int n = s1.length();
	int m = s2.length();
	if(n != m){
		return -1;
	}

	unordered_map<char, int> mp;
	for(int i = 0; i < n; i++){
		if(mp.count(s1[i])){
			mp[s1[i]]++;
		}
		else{
			mp[s1[i]] = 1;
		}
	}

	for(int i = 0; i < n; i++){
		if(mp.count(s2[i]))
			mp[s2[i]]--;
	}

	for(auto i : mp){
		if(i.second != 0)
			return -1;
	}

	int i = n - 1, j = n - 1;
	int res = 0;
	while(i >= 0 && j >= 0){
		while(i >= 0 && s1[i] != s2[j]){
			res++;
			i--;
		}
		i--;
		j--;
	}
	return res;
}

int main()
{
    string A = "EACBD";
    string B = "EABCD";

    cout << "Minimum number of operations required is " << transformString(A, B) << endl;
    return 0;
}