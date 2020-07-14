#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin >> n;
	vector<int> e, o;
	for (int i=0; i<n; i++) {
		cin >> x;
		if (x&1) o.emplace_back(i);
		else e.emplace_back(i);
	}

	if (o.size() > e.size()) cout << e[0]+1;
	else cout << o[0]+1;

	return 0;
}