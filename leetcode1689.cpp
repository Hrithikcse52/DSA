#include <bits/stdc++.h>
using namespace std;

void cp() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
class Solution {
public:

	int getMaxDigit(int len, int digit) {
		// cout << digit << "-" << endl;
		int n = 0;
		for (int i = 0; i < len; i++) {
			if ( digit > n)
				n += 10 * i;
			else n += 10 * i + 1;
		}
		return n;
	}
	int minPartitionsa(string n) {
		cout << *begin(n)  << *prev(end(n)) << endl;
		cout << *max_element(begin(n), end(n)) - '0' << endl ;
		return *max_element(begin(n), end(n)) ;
	}

	int minPartitions(string n, int count = 0) {


		int len = n.length();
		if (len == 0) return count;
		int number = stoi(n);
		int maxDigit = getMaxDigit(len, number);
		count++;
		number -= maxDigit;
		string a = to_string(number);
		// minPartitions(a, count);

		int temp = getMaxDigit(a.length() , number);

		count++;
		number -= temp;
		cout << number;
		string b = to_string(number);
		cout << "Digit:" << getMaxDigit(b.length(), number) << endl;
		return count;

	}
};



int main () {
	cp();
	string n;
	cin >> n;
	Solution obj;
	cout << obj.minPartitionsa(n) ;
}