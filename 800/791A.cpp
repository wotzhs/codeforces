#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, y=0;
	cin >> a >> b;

	while(a<=b) {
		a*=3;
		b*=2;
		y++;
	}

	cout << max(y, 1);

	return 0;
}
