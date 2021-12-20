#include <bits/stdc++.h>
using namespace std;
void cp() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> answer;
        map<int, vector<int>> temp;
        int len = groupSizes.size();
        for (int i = 0; i < len; i++ ) {
            int key = groupSizes[i];
            if (temp.count(key) > 0) {
                temp[key].push_back(i);
            }
            else {
                temp[key] = vector<int> {i};
            }
            if ( (int) temp[key].size() == key) {
                answer.push_back(temp[key]);
                temp.erase(key);
            }
        }
        return answer;
    }

};

int main () {
    cp();
    // vector <int> people = {3, 3, 3, 3, 3, 1, 3};
    vector <int> people = {2, 1, 3, 3, 3, 2};
    Solution obj;
    vector<vector<int>> ans;
    ans = obj.groupThePeople(people);

    for (auto it : ans) {
        for (auto x : it) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}