#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int q[n][3]={0};
	for(int i=0; i<n; i++)
		for (int j=0; j<3; j++)
			cin >> q[i][j];

	int ans=0;
	for (int i=0; i<n; i++) {
		int tmp=0;
		for (int j=0; j<3; j++) {
			tmp+=q[i][j];
			if (tmp >= 2) {
				ans++;
				break;
			}
		}
	}
		
	cout << ans;
}