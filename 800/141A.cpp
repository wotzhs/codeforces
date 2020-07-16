#include <bits/stdc++.h>
using namespace std;

int main(){
	string a, b, c;
	cin >> a >> b >> c;
	int abc[26];
	memset(abc, 0, sizeof abc);
	
	for (char ch: a)
		abc[ch-'A']++;
	for (char ch: b)
		abc[ch-'A']++;
	for (char ch: c)
		abc[ch-'A']--;

	for (int i=0; i<26; i++) {
		if (abc[i] != 0) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
	return 0;
}