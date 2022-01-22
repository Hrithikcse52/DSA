#include <bits/stdc++.h>

using namespace std;

// 5
// 6
// 3 2 1
// 2 4 0
// 1 0 5
// 3
// 3 0 0
// 0 3 0
// 0 0 3
// 5
// 2 1 2
// 1 4 0
// 2 0 3
// 4
// 2 1 0
// 0 2 2
// 1 1 2
// 5
// 4 1 0
// 1 5 0
// 0 0 5


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

bool checkReal(int arr[][3], int n) {
	if (arr[0][0] == n && arr[1][1] == n && arr[2][2] == n) return true;
	return false;
}
int check(int arr[][3], int n) {
	int cnt = 0;
	while (arr[0][1] > 0 && arr[1][0] > 0) {
		arr[0][1]--; arr[1][0]--;
		arr[1][1]++; arr[0][0]++;
		cnt++;
	}
	if (checkReal(arr, n)) {
		return cnt;
	}
	while (arr[0][2] > 0 && arr[2][0] > 0) {
		arr[0][2]--; arr[2][0]--;
		arr[2][2]++; arr[0][0]++;
		cnt++;
	}
	if (checkReal(arr, n)) {
		return cnt;
	}
	while (arr[0][1] > 0 && arr[2][0] > 0) {
		arr[0][1]--; arr[2][1]++;
		arr[2][0]--; arr[0][0]++;
		cnt++;
	}
	if (checkReal(arr, n)) {
		return cnt;
	}
	while (arr[0][2] > 0 && arr[1][0] > 0) {
		arr[1][0]--; arr[0][0]++;
		arr[0][2]--; arr[1][2]++;
		cnt++;
	}
	if (checkReal(arr, n)) {
		return cnt;
	}
	while (arr[1][2] > 0 && arr[2][1] > 0) {
		arr[1][2]--; arr[2][1]--;
		arr[2][2]++; arr[1][1]++;
		cnt++;
	}
	if (checkReal(arr, n)) {
		return cnt;
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

