#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, t;
	cin >> s >> t;
	for (int i=0, j=t.size()-1; i<s.size(); i++, j--) {
		if (s[i] != t[j]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}