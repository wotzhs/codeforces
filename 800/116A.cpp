#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, a, b, last=0, cap=0;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		last += -a + b;
		cap = max(last, cap);

	}
	cout << cap;
	return 0;
}