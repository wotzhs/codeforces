#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, p;
	float v;
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> p;
		v += p;
	}
	cout << fixed << setprecision(9);
	cout << v/n;
	return 0;
}