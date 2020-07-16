#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, l;
	cin >> n >> l;
	vector<int> lamps(n);
	for (int i=0; i<n; i++)
		cin >> lamps[i];

	sort(lamps.begin(), lamps.end());

	int mxdist=0;
	for (int i=0; i<n-1; i++)
		mxdist = max(mxdist, lamps[i+1] - lamps[i]);

	int headdist = lamps[0]-0;
	int taildist = l-lamps[n-1];

	cout << fixed << setprecision(9);
	if ((lamps[0] != 0 || lamps[n-1] != l) && (headdist>mxdist/2 || taildist>mxdist/2)) {
		if (headdist > taildist) cout << headdist * 1.0;
		else cout << taildist *1.0;
	}
	else cout << mxdist/2.0;
	return 0;
}