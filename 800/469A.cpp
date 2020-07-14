#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> levels(n, 0);
	
	for (int i=0; i<2; i++) {
		int p, x;
		cin >> p;
		for (int i=0; i<p; i++) {
			cin >> x;
			levels[--x]++;
		}
	}

	for (int i=0; i<n; i++) {
		if (levels[i] == 0) {
			cout << "Oh, my keyboard!";
			return 0;
		}
	}

	cout << "I become the guy.";

	return 0;
}