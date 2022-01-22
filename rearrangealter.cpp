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
void rearrange(long long *array, int n) {
	int start = 0;
	int end = n - 1;
	long long arr[n];
	bool l = true;
	int i = 0;
	while (start <= end && i < n) {
		if (l) {
			arr[i++] = array[end--];
			l = false;
		}
		else {
			arr[i++] = array[start++];
			l = true;
		}
	}
	array = arr;
}


int main() {
	cp();
	int n;
	cin >> n;
	long long arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	rearrange(arr, n);



	return 0;
}

