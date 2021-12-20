#include <bits/stdc++.h>
using namespace std;

void cp() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

class Solution {
public:

	bool isUnder(vector<int> &point, vector<int> &it) {
		if (((point[0] - it[0]) * (point[0] - it[0]) +  (point[1] - it[1]) * (point[1] - it[1]) <= (it[2]*it[2]) ) ) {
			return true;
		}
		return false;
	}

	vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
		vector<int> answer ;

		for (auto it : queries) {
			int count = 0;
			for (auto point : points) {
				if (isUnder(point, it)) {
					count++;
				}
			}
			answer.push_back(count);

		}


		return answer;


	}
};


int main() {
	cp();
	Solution obj;
	vector<vector<int>> points = {{1, 2}, {2, 2}, {5, 3}, {3, 3}, {1, 3}};
	vector<vector<int>> queries = {{1, 1, 2}, {4, 3, 1}, {2, 3, 1}};
	vector<int> ans = obj.countPoints(points, queries);
	for (auto it : ans) {
		cout  << it << " ";
	}
	return 0;
}