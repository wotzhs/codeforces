#include <bits/stdc++.h>
using namespace std;

#define MXN 5
#define MXM 5

int main(){
	int x;
	for (int i=0; i<MXN; i++)
		for (int j=0; j<MXM; j++) {
			cin >> x;
			if (x == 1) {
				cout << (abs(i-2)+abs(j-2));
				break;
			}
		}

	return 0;
}