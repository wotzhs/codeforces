#include <bits/stdc++.h>
using namespace std;

int main(){
	int y;
	cin >> y;
	while (y++) {
		int Y=y;
		bool distinct=true;
		unordered_map<int, int> mp;
		while(Y>0) {
			int d = Y%10;
			mp[d]++;
			if (mp[d] > 1) {
				distinct=false;
				break;
			}
			Y/=10;
		}
		if (distinct) {
			cout << y;
			break;
		}
	}
	return 0;
}