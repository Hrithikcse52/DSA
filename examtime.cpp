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
		int dra[3];
		cin >> dra[0] >> dra[1] >> dra[2];
		int slt[3];
		cin >> slt[0] >> slt[1] >> slt[2];
		int draSum = 0;
		int sltSum = 0;
		for (int i = 0; i < 3; i++) {
			draSum += dra[i];
			sltSum += slt[i];
		}

		if (draSum > sltSum) {
			cout << "DRAGON" << endl;
		}
		else if (sltSum > draSum ) {
			cout << "SLOTH" << endl;
		}
		else {
			if (slt[0] != dra[0]) {
				if (slt[0] > dra[0]) cout << "SLOTH" << endl;
				else cout << "DRAGON" << endl;
			}
			else if ( slt[1] != dra[1]) {
				if (slt[1] > dra[1]) cout << "SLOTH" << endl;
				else cout << "DRAGON" << endl;
			}
			else cout << "TIE" << endl;



		}


	}



	return 0;
}

