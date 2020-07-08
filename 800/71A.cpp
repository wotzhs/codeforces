#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	while(n--) {
		string s;
		cin >> s;
		if (s.size() <= 10) {
			cout << s << "\n";
			continue;
		}
		stringstream newS;
		newS << s[0];
		newS << s.size()-2;
		newS << s[s.size()-1];
		cout << newS.str() << "\n";
	}
	
	return 0;
}