#include <bits/stdc++.h>
using namespace std;

int main(){
	unordered_map<int, int> mp;
	int x, count=0;
	for (int i=0; i<4; i++) {
		cin >> x;
		mp[x]++;
	}

	for (auto it = mp.begin(); it != mp.end(); it++)
		count += it->second-1;

	cout << count;
	return 0;
}