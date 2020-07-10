#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	unordered_map<char, int> mp;
	for (char ch: s)
		mp[ch]++;

	int count=0;
	for (auto it = mp.begin(); it != mp.end(); it++)
		count++;

	if (count&1) cout << "IGNORE HIM!";
	else cout << "CHAT WITH HER!";

	return 0;
}