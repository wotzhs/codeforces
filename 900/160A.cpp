#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++)
		cin >> a[i];
	
	sort(a, a+n);
	int lsum=0, rsum=0, count=0;
	for (int i: a)
		lsum+=i;

	while(rsum<=lsum) {
		rsum+=a[n-(++count)];
		lsum-=a[n-count];
	}

	cout << count;
	return 0;
}