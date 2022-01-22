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
int main() {
	cp();
	int t;
	cin >> t;
	while (t--) {
		int n, d;
		cin >> n >> d;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		reverse(arr, arr + d);
		reverse(arr + d, arr + n);
		reverse(arr, arr + n);
		for (auto it : arr) {
			cout << it << " " ;
		}
		cout << endl;
	}


	return 0;
}

