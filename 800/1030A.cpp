#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, i, s=0;
	cin >> n;
	while(n--) {
		cin >> i;
		s+=i;
	}
	if (s>0) cout << "HARD";
	else cout << "EASY";
	return 0;
}