#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	pair<int, int> tmps, counts;
	for(char ch: s) {
		if (ch == '0') {
			tmps.first++;
			tmps.second=0;
		}
		else {
			tmps.second++;
			tmps.first=0;
		}
		counts.first = max(tmps.first, counts.first);
		counts.second = max(tmps.second, counts.second);
	}

	if (counts.first >= 7 || counts.second >=7 ) cout << "YES";
	else cout << "NO";

	return 0;
}