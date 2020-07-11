#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, v=0;
	cin >> n;
	while(n--) {
		char ch;
		cin >> ch;
		if (ch == 'A') v++;
		else v--;
	}

	if (v>0) cout << "Anton";
	else if (v<0) cout << "Danik";
	else cout << "Friendship";

	return 0;
}