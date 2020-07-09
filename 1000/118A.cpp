#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, ans;
	cin >> s;
	for (char ch: s) {
		char lch = tolower(ch);
		if (lch == 'a' || lch == 'o' || lch == 'y' || lch == 'e' || lch == 'u' || lch == 'i') continue;
		else {
			ans += '.';
			ans += lch;
		}
	}

	cout << ans;

	return 0;
}