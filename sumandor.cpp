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
int countBits(int n) {
	int cnt = 0;
	while (n > 0) {
		n = n >> 1;
		cnt++;
	}
	return cnt;
}
int nextNum (int n) {
	return 1 << (n - 1);
}

int leastBitSet (int x, int cnt) {
	for (int i = 0; i < cnt; i++)
		if ((x & (1 << i) ) != 0)
			return i + 1;
	return 0;
}

bool numbers(int x, int s) {
	int cnt = countBits(x);
	// int setBit = ffs(x) - 1;
	int setBit = 4;
	for (int j = x - 1; j > (1 << (cnt - 1)); j--) {
		if ((j & (1 << setBit)) != 0) {
			cout << "J:" << j << endl;
			int rem = s % j;
			int qua = s / j;
			if (((qua * j ) + rem == s) && ((j | rem) == x)) {
				cout << qua + 1 << endl;
				return true;
			}
		}
	}
	cout << -1 << endl;
	return false;
}


bool solve(int x, int s , vector<int> num) {
	for (auto it : num) {
		int rem = s % it;
		int qua = s / it;
		// cout << "X:" << x << " " << it << " " << rem << " " << qua << "*" << endl;
		if (((qua * it ) + rem == s) && ((it | rem) == x)) {
			// cout << "Found" << it << rem << endl;
			cout << qua + 1 << endl;
			return true;
		}
	}
	cout << -1 << endl;
	return false;
}
int main() {
	cp();
	int t;
	cin >> t;
	while (t--) {
		int x, s;
		cin >> x >> s;
		if (x == 1 ) {
			cout << s << endl;

		} else {
			numbers(x, s);
			// cout << tempAns.size() << endl;
			// solve(x, s, tempAns);

		}
		// cout << ffs(13);
		// for (auto it : tempAns) {
		// 	cout << it << " ";
		// }
		// cout << endl;

	}

	return 0;
}

