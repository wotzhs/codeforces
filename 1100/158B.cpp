#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, x, count=0;
	cin >> n;
	vector<int> groups(n);
	for (int i=0; i<n; i++) {
		cin >> groups[i];
	}

	sort(groups.begin(), groups.end());

	for (int i=n-1, j=0; i>=j; i--) {
		if (groups[i] == 4) {
			count++;
			continue;
		}
		
		if (groups[i] + groups[j]<=4) {
			int sum=groups[i]+groups[j++];
			while(sum+groups[j]<=4) {
				sum+=groups[j++];
			}
		}

		count++;
	}

	cout << count;

	return 0;
}