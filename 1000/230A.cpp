#include <bits/stdc++.h>
using namespace std;

int main(){
	int s, n, x, y;
	cin >> s >> n;

	vector<pair<int, int>> rounds(n);
	for (int i=0; i<n; i++) {
		cin >> x >> y;
		rounds[i] = {x, y};
	}

	sort(rounds.begin(), rounds.end(), [&](const auto a, const auto b) {
		return a.first < b.first;
	});

	for (int i=0; i<rounds.size(); i++) {
		if (s>rounds[i].first) s+=rounds[i].second;
		else {
			cout << "NO";
			return 0;
		}	
	}

	cout << "YES";
	return 0;
}