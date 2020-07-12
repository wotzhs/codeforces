#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int ucase=0;
	for (int i=1; i<s.size(); i++)
		if (s[i]-'A' >= 0 && s[i]-'A' <=26) ucase++;

	if (ucase < s.size()-1) {
		cout << s;
		return 0;
	}

	if (s[0]-'A' >= 0 && s[0]-'A' <=26) s[0] = tolower(s[0]);
	else s[0] = toupper(s[0]);
	
	for (int i=1; i<s.size(); i++)
		s[i] = tolower(s[i]);

	cout << s;

	return 0;
}