#include <bits/stdc++.h>
using namespace std;

int main(){
	int k, r, i=1;
	cin >> k >> r;
	k%=10;
	while((k*i)%10!=0 && ((k*i)%10)-r!=0) i++;
	cout << i;
	return 0;
}