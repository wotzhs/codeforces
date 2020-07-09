#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	int scores[n];
	for (int i=0; i<n; i++)
		cin >> scores[i];

	int sum=0;
	for (int i: scores) {
		if (i > 0 && i >=scores[k-1]) sum++;
	}

	cout << sum;
	return 0;
}