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
int check(int arr[][3], int n) {
	if (arr[0][0] == n && arr[1][1] == n && arr[2][2] == n) {
		return 0;
	}
	int cnt = 0;
	int i = 0;
	int j = 1;
	while ((arr[0][0] != n && arr[1][1] != n) ) {
		if (arr[i][j] > 0 && arr[j][i] > 0) {
			arr[i][j] --; arr[j][i] --;
			arr[i][i]++; arr[j][j]++;
			cnt++;

		}
	}

	return cnt;
}


int main() {
	cp();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[3][3];
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cin >> arr[i][j];
			}
		}
		cout << check(arr, n);

		cout << endl;
	}

	return 0;
}

