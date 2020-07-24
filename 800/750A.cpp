#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, t, i=0;
	cin >> n >> k;
	t = 240-k;
	while(t>0) {
		t-=5*(++i);
		if (t<0) i--;
	}
	i > n ? cout << n : cout << i;
	return 0;
}