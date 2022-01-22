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
int checkBit(int n) {
	int cnt = 0;
	while (n > 0) {
		n = n >> 1;
		cnt ++;
	}
	return cnt;
}
int getPowerNum(int n) {
	return 1 << checkBit(n);
}
int powCheck(int n) {
	return !(n & (n - 1));
}
int calSum (vector<int> & num) {
	int sum = 0;
	for (auto it : num) {
		sum += it;
	}

	return sum;
}
int solve(vector<int> & num, int x, int diff, int& cnt , vector<int> &ans) {
	int csum = 0;
	cnt++;
	for (int i = 0; i < (int) num.size() && csum < diff; i++) {
		csum += num[i] * x - num[i];
		if (csum <= diff) {
			num[i] *= x;
			ans.push_back(i);
		} else {
			csum -= num[i] * x - num[i];
			return csum;
		}
	}
	return csum;
}


int main() {
	cp();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> num(n);
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> num[i];
			sum += num[i];
		}
		if (powCheck(sum)) {
			cout << 0 << endl;
		} else {
			int targetSum = getPowerNum(sum);
			int diff = targetSum - sum;
			int cnt = 0;
			vector<vector<int> > ans;
			int x = 2;
			while (diff != 0) {
				vector<int> ansTemp;
				solve(num, x, diff, cnt, ansTemp);
				ans.push_back(ansTemp);
				sum = calSum(num);
				if (powCheck(sum)) {
					break;
				}
				targetSum = getPowerNum(sum);
				diff = targetSum - sum;
			}
			cout << cnt << endl;
			for (auto  it : ans) {
				cout << it.size() << " " << x << endl;
				for (auto xs : it) {
					cout << xs + 1 << " " ;
				}
				cout << endl;
			}
		}

	}
	return 0;
}

