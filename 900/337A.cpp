#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, mn=INT_MAX;
	cin >> n >> m;
	vector<int> p(m);
	for (int i=0; i<m; i++)
		cin >> p[i];
	
	sort(p.begin(), p.end());

	for (int i=0; i<=m-n; i++) 
		mn = min(mn, p[i+n-1]-p[i]);

	if (mn == INT_MAX) cout << 0;
	else cout << mn;

	return 0;
}