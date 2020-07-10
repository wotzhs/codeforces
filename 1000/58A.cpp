#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, x="olleh";
	cin >> s;
	for (char ch: s) {
		if (ch == x[x.size()-1]) x.pop_back();
	}

	if (!x.size()) cout << "YES";
	else cout << "NO";

	return 0;
}