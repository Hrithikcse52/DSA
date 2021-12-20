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

void naiveMerge(vector<int> &arr1, vector<int> &arr2, int n, int m) {
	vector<int> final;

	for (auto it : arr1) {
		final.push_back(it);
	}
	for (auto it : arr2) {
		final.push_back(it);
	}
	sort(final
	     .begin(), final
	     .end());

	for (int i = 0; i < n; i++) {
		arr1[i] = final[i];
	}
	for (int i = 0 ; i < m; i++) {
		arr2[i] = final[i + n];
	}
}

void betterMerge(vector<int> &arr1, vector<int> &arr2, int n, int m) {

	for (int i = 0; i < n; i++) {
		if (arr1[i] > arr2[0]) {
			int temp = arr1[i];
			arr1[i] = arr2[0];
			arr2[0] = temp;
		}
		sort(arr2.begin(), arr2.end());
	}
}

int nextGap(int gap)
{
	if (gap <= 1)
		return 0;
	return (gap / 2) + (gap % 2);
}

void mergeOp(vector<int>&arr1, vector<int> &arr2, int n, int m) {
	int i, j, gap = n + m;
	for (gap = nextGap(gap);
	        gap > 0; gap = nextGap(gap))
	{
		for (i = 0; i + gap < n; i++)
			if (arr1[i] > arr1[i + gap])
				swap(arr1[i], arr1[i + gap]);
		for (j = gap > n ? gap - n : 0;
		        i < n && j < m;
		        i++, j++)
			if (arr1[i] > arr2[j])
				swap(arr1[i], arr2[j]);

		if (j < m) {
			for (j = 0; j + gap < m; j++)
				if (arr2[j] > arr2[j + gap])
					swap(arr2[j], arr2[j + gap]);
		}
	}
}



int main() {
	cp();
	int n, m;
	cin >> n;
	vector<int> arr1(n);
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
	}
	cin >> m;
	vector<int> arr2(m);
	for (int i = 0; i < m; i++) {
		cin >> arr2[i];
	}


	// naiveMerge(arr1, arr2, n, m);
	// betterMerge(arr1, arr2, n, m);
	mergeOp(arr1, arr2, n, m);


	for (auto it : arr1) {
		cout << it << " ";
	}
	cout << endl;

	for (auto it : arr2) {
		cout << it << " ";
	}
	cout << endl;





	return 0;
}
