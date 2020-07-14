#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a, mxi, mni, mx=INT_MIN, mn=INT_MAX;
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> a;
		if (a > mx) {
			mx = a;
			mxi = i;
		}
		if (a <= mn) {
			mn = a;
			mni = i;
		}
	}

	int t = mxi-1+n-mni;
	if (mni<mxi) t--;

	cout << t;
	return 0;
}