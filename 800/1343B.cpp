#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		if (n%4 != 0) {
			cout << "NO\n";
			continue;
		}
		vector<int> va, vb;
		int suma=0, sumb=0;
		for (int i=0; i<n-1; i+=2) {
			va.emplace_back(i+2);
			vb.emplace_back(i+1);
			suma+=i+2;
			sumb+=i+1;
		}
		sumb -= vb.back();
		vb[vb.size()-1] = suma-sumb;

		cout << "YES\n";
		for (int i: va)
			cout << i << " ";

		for (int i: vb) 
			cout << i << " ";
		cout << "\n";			
	}
	return 0;
}