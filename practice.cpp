// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <map>
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

int main () {
	cp();
	string s;
	cin >> s;
	int len = s.length();
	unordered_map <char, int> hash;
	for (int i = 0; i < len ; i++) {
		hash[s[i]]++;

	}

	for (int i = 0; i < len; i++) {
		if (hash[s[i]] == 1) {
			cout << i;
			break;
		}
	}

	// cout << hash[s[i]] << " ";

	// for (int i = 0; i < len; i++) {
	// 	if (hash[s[i]] == 1)
	// 		cout << i;
	// }

	// return -1;
}


// int main() {
// 	cp();
// 	string s;
// 	cin >> s;
// 	int len = s.length();
// 	for (int i = 0; i < len; i++) {
// 		bool repeated = false;
// 		for (int j = 0; j < len ; j ++) {
// 			if (s[i] == s[j] && i != j)
// 				repeated = true;
// 		}
// 		if (repeated == false) {
// 			cout << i;
// 			break;
// 		}
// 	}

// }




// int main() {
// 	cp();
// 	int n;
// 	cin >> n;
// 	int count = 0;
// 	std::vector<int> v;
// 	for (int i = 0; i < n; i++) {
// 		int temp;
// 		cin >> temp;
// 		if (temp != 0) {
// 			v.push_back(temp);

// 		}
// 		else count ++;
// 	}
// 	for (int i = 0; i < count; i++) {
// 		v.push_back(0);
// 	}
// 	for (int i = 0; i < n; i++) {
// 		cout << v[i] << " ";
// 	}
// }


// int main() {
// 	cp();
// 	int n;
// 	cin >> n;
// 	int count = 0;
// 	for (int i = 1; i <= n; i++) {
// 		if (i % 2 != 0) {
// 			for (int j = 1; j <= i; j++) {
// 				count++;
// 				if (j < i) {
// 					cout << count << "$";
// 				}
// 				else {
// 					cout << count;
// 				}
// 			}
// 		}
// 		else {
// 			count += i;
// 			for (int j = 1; j <= i; j++) {
// 				if (j < i)
// 					cout << count << "$" ;
// 				else
// 					cout << count;
// 				count--;

// 			}
// 			count += i;

// 		}
// 		cout << "\n";
// 	}


// }


// int main () {
// 	cp();
// 	int n;
// 	cin >> n;
// 	string str = to_string(n);

// 	cout << str.length();
// 	vector<int> v;
// 	while (n > 0) {
// 		v.push_back(n % 10);
// 		n = n / 10;
// 	}
// 	int len = v.size();
// 	int left_side = 0;
// 	int right_side = 0;

// 	for (int i = 0; i < len / 2 ; i++ ) {
// 		left_side += v[i];
// 	}
// 	for (int i = len / 2; i < len ; i++ ) {
// 		right_side += v[i];
// 	}

// 	// cout << v.size();
// 	if (left_side == right_side) {
// 		cout << "YES" << endl;
// 	}
// 	else {
// 		cout << "NO" << endl;
// 	}
// }

