#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x=0, y=0, z=0;
	cin >> n;
	while(n--) {
		int a, b, c;
		cin >> a >> b >> c;
		x+=a;
		y+=b;
		z+=c;
	}

	if (x == 0 && y == 0 && z == 0) cout << "YES";
	else cout << "NO";

	return 0;
}