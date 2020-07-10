#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> luckyNums = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777};
	for (int i: luckyNums) {
		if (n%i == 0) {
			cout << "YES";
			return 0;
		}
	}

	while(n>=1){
		int d = n%10;
		if (d != 4 && d != 7) {
			cout << "NO";
			return 0;
		};
		n /= 10;
	}

	cout << "YES";
	return 0;
}