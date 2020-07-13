#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, ans="";
	cin >> s;
	for (int i=0; i<s.size(); i++) {
		string sub="";
		for (int j=i; j<s.size() && j<i+3; j++) {
			sub += s[j];
		}
		
		if (sub == "WUB") {
			i+=2;
			if (ans != "") ans += " ";
			continue;
		}
		ans+=s[i];
	}
	cout << ans;
	return 0;
}