#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	string s;
	unordered_map<string, int> mp;
	while (n--) {
		cin >> s;
		if (++mp[s] < 2) cout << "OK\n";
		else cout << s << mp[s]-1 << "\n";
	}
	return 0;
}