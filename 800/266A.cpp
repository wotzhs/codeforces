#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s;
	cin >> n >> s;
	n=0;
	for(int i=0; i<s.size()-1; i++) {
		if (s[i]==s[i+1]) n++;
	}
	cout << n;
	return 0;
}