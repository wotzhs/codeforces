#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int j=0, k=s.size()-1;
	for (int i=0, j=0, k=s.size()-1; i<=k; i+=2) {
		if (s[i] == '1') {
			swap(s[i], s[j]);
			j+=2;
		}
		if (s[i] == '3') {
			swap(s[i], s[k]);
			i-=2;
			k-=2;
		}
	}

	cout << s;
	return 0;
}