#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, mx=0;
	cin >> a >> b >> c;
	cout << max({a+b*c, a*(b+c), a*b*c, (a+b)*c, a+b+c});
	return 0;
}