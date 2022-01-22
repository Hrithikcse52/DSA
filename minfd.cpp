#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

void cp() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int solve(vector<int> & v, int x, int n) {
	sort(v.begin(), v.end());
	for (auto it : v) {
		if (it >= x) {
			return 1;
		}
	}
	int sum = 0;
	int cnt = 0;
	for (int i = n - 1; i >= 0; --i) {
		if (sum < x) {
			sum += v[i];
			cnt++;
		}
	}
	if (sum < x) {
		return -1;
	}
	return cnt;
}

int main() {
	cp();
	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		vector<int> v(n);
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
		}
		cout << solve(v, x, n) << endl;
	}

	return 0;
}

