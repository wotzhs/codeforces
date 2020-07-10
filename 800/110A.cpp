#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n, count=0;
	cin  >> n;

	while(n>1) {
		if (n%10==4 || n%10==7) count++;
		n /=10;
	}

	if (count<1) {
		cout << "NO";
		return 0;
	}

	while(count>=1) {
		if (count%10!=4 && count%10!=7) {
			cout << "NO";
			return 0;
		}
		count /=10;
	}

	cout << "YES";

	return 0;
}