#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, g=0;
	cin >> n;

	string curr, prev;
	while (n--) {
		cin >> curr;
		if (curr != prev) g++;
		prev = curr;
	}

	cout << g;

	return 0;
}