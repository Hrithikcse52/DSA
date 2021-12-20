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
void recursiveCall(vector<int> arr, vector<vector<int>> &ans, vector<int> ds, vector<bool> freq, int n) {
	if (ds.size() == arr.size()) {
		ans.push_back(ds);
		return;
	}
	for (int i = 0 ; i < n; i++) {
		if (!freq[i]) {
			freq[i] = true;
			ds.push_back(arr[i]);
			recursiveCall(arr, ans, ds, freq, n);
			ds.pop_back();
			freq[i] = false;
		}
	}
}


vector<int> permute(vector<int> arr) {
	vector<vector<int>> ans;
	vector<int> ds;
	vector<bool> freq(arr.size());
	recursiveCall(arr, ans, ds, freq, arr.size());
	return ans[1];
}

int main() {
	cp();
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	vector<int> ans;
	ans = permute(arr);

	next_permutation(arr.begin(), arr.end());


	for (auto x : arr) {
		cout << x << " ";
	}
	return 0;
}

