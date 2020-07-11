#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;

	int ucase=0;
	for (char ch: s) {
		if (ch-'a' >= 0 && ch-'a' <= 26) ucase--;
		else ucase++;
	}

	if (ucase>0)
		for (int i=0; i<s.size(); i++)
			s[i] = toupper(s[i]);
	else
		for (int i=0; i<s.size(); i++)
			s[i] = tolower(s[i]);

	cout << s;

	return 0;
}