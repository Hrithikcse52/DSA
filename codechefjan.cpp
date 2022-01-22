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
		cout << t;
		int n;
		cin >> n;
		int arr1[3];
		int arr2[3];
		int arr3[3];
		int cnt = 0;
		for (int i = 0; i < 3; i++) {
			cin >> arr1[i];
		}
		for (int i = 0; i < 3; i++) {
			cin >> arr2[i];
		}
		for (int i = 0; i < 3; i++) {
			cin >> arr3[i];
		}
		if (arr1[0] == n && arr2[1] == n && arr3[2] == n) {
			cnt = 0;
		}
		else {

			while (arr1[0] != n && arr2[1] != n) {
				if (arr1[1] > 0 && arr2[0] > 0) {
					arr1[1]--; arr2[0]--;
					arr1[0]++; arr2[1]++;
					cnt++;
				}
				if (arr1[2] > 0 && arr3[0] > 0) {
					arr1[2]--; arr3[0]--;
					arr1[0]++; arr2[1]++;
					cnt++;

				}
				return 0;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

