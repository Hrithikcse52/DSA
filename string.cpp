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


// int main() {
// 	cp();
// 	string name = "i am hrithik";
// 	// string name = "";
// 	int n = name.length();
// 	string temp = "";
// 	stack<string> st;
// 	for (int i = 0 ; i < n; i++) {
// 		if (name[i] == ' ') {
// 			st.push(temp);
// 			temp = "";
// 		} else {
// 			temp.push_back(name[i]);
// 		}
// 	}
// 	if (name[n - 1] != ' ') {
// 		st.push(temp);
// 	}
// 	while (!st.empty()) {
// 		cout << st.top() << " ";
// 		st.pop();
// 	}

// 	return 0;
// }

int main () {
	cp();
	string infix = "5+3+3/2*3";
	stack <char> st;
	int len = infix.length();
	for (int i = 0; i < len; i++) {
		if (isdigit(infix[i])) {
			cout << infix[i];
		}
		else {
			st.push(infix[i]);
		}
	}
	// while (!st.empty()) {
	// 	cout << st.top() << " ";
	// 	st.pop();
	// }
	return 0;
}