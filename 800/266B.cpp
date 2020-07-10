#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, t;
	string s;
	cin >> n >> t >> s;

	queue<pair<int, int>> q;
	for (int i=0; i<s.size(); i++)
		if (s[i] == 'B')
			q.emplace(make_pair(i,1));

	while(q.size()) {
		auto p = q.front();
		q.pop();
		if (s[p.first+1] == 'G') swap(s[p.first], s[p.first++]);
		if (p.second<t) q.push({p.first, p.second+1});
	}

	cout << s;

	return 0;
}