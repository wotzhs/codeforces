#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> box(n);
	for (int i=0; i<n; i++)
		cin >> box[i];
	sort(box.begin(), box.end());
	for (int i: box)
		cout << i << " ";
	cout << "\n";
	return 0;
}