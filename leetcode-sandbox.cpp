
#include <bits/stdc++.h>
using namespace std;
void cp() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


class Solution {
public:
	int search(vector<int>& nums, int target) {
		int size = nums.size();
		int low = 0;
		int high = size - 1;
		int mid = (low + (high - low)) / 2;
		while (mid >= low && mid <= high) {

			cout << "LOW: " << low << " HIGH: " << high << endl;
			if (nums[mid] == target) {
				return mid;
			}
			else if (target > nums[mid]) {
				low = mid + 1;
				mid = (mid + 1 + high) / 2;
			}
			else if (target < nums[mid]) {
				high = mid - 1;
				mid = (mid - 1 + low ) / 2;
			}
			else {
				cout << "MID:" << mid;
			}
		}

		return low;
	}


};

int main() {
	cp();
	vector<int> inp = {1, 2, 4, 5, 6, 7, 9};
	// vector<int> inp = {5};
	int target = 8;
	Solution obj;
	cout << obj.search(inp, target);

	return 0;
}