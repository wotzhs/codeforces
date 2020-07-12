#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a, prev=0, l=0, tmp=0;
	cin >> n;
	while(n--) {
		cin >> a;
		if (a>=prev) tmp++;
		else tmp=1;
		prev = a;
		l = max(l, tmp);
	}

	cout << l;
	return 0;
}