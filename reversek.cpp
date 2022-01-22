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
void solve(vector<int> &temp, int n, int k) {
	int start;
	int end;
	for (int i = 0; i < n; i += k) {
		start = i;
		end = i + k - 1;
		if (end > n - 1)
			end = n - 1;
		reverse(temp.begin() + start, temp.begin() + end + 1);
	}

}

int main() {
	cp();
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> temp(n);
		for (int i = 0; i < n; i++) {
			cin >> temp[i];
		}
		solve(temp, n, k);
		for (auto it : temp) {
			cout << it << " ";
		}
		cout << endl;


	}


	return 0;
}

