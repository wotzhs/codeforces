#include <bits/stdc++.h>
using namespace std;

int main(){
	int nums[4];
	for (int i=0; i<4; i++)
		cin >> nums[i];

	int mx=nums[0], mxi=0;
	for (int i=1; i<4; i++)
		if (nums[i]>mx) {
			mx = nums[i];
			mxi = i;
		}

	for (int i=0; i<4; i++)
		if (i != mxi) cout << nums[mxi] - nums[i] << " ";

	return 0;
}