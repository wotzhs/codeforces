#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin >> ws, s);

	unordered_map<char, int> mp;
	for (char ch: s)
		if (ch>='a' && ch<='z')
			mp[ch]++;

	int unique=0;
	for (auto it = mp.begin(); it != mp.end(); it++)
		unique++;

	cout << unique;
	return 0;
}