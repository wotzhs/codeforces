#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<bool> a(26, false);
	while (n--) {
		char ch;
		cin >> ch;
		a[tolower(ch)-'a'] = true;
	}

	for (bool b: a) {
		if (!b) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
	return 0;
}