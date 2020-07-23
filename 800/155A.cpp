#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, c=0;
	cin >> n;

	int v[n];
	for (int i=0; i<n; i++)
		cin >> v[i];

	int mx=v[0], mn=v[0];
	for (int i=1; i<n; i++) {
		if (v[i]>mx) {
			mx = v[i];
			c++;
			continue;
		}
		if (v[i]<mn) {
			mn = v[i];
			c++;
		}
	}
	cout << c;
	return 0;
}