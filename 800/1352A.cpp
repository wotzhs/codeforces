#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n, rm;
	cin >> t;
	while (t--) {
		cin >> n;
		if (n<10) {
			cout << 1 << "\n" << n << "\n";
			continue;
		}
		vector<int> s;
		while(n>10) {
			int x=n, i=0;
			while (x>10) {
				x /= 10;
				i++;
			}
			x *= pow(10,i);
			s.emplace_back(x);
			n -= x; 
			if (n-x == 0) break;
		}
		if (n>0) s.emplace_back(n);
		cout << s.size() << "\n";
		for (int i: s)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}
