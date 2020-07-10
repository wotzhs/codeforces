#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, d=5, steps=0;
	cin >> x;

	while(x>=1) {
		if (x>=d) {
			x-=d;
			steps++;
		}
		else d--;
	}

	cout << steps;

	return 0;
}