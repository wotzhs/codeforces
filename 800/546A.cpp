#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int c, d, n;
	cin >> c >> d >> n;
	for (int i=1; i<=n; i++) {
		d -= i*c;
	}

	cout << abs(min(d, 0));

	return 0;
}