#include <bits/stdc++.h>
#include <bitset>
#include <math.h>
#include <algorithm>



using namespace std;


#define ll long long int
#define ld long  double
#define debug(x) cout<< #x << " " << x << '\n';
#define loop(s,n) for(int i = s; i< n ; i ++ )
#define p(obj) cout<<(obj)<<"\n"
#define t(t) int t; cin>>t; while(t--)
#define endl "\n"
#define in(a) cin>>a;
#define pb push_back

const int MAXN = 1e5;

void cp() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
}






/*

Given a maximum of 100 digit numbers as input,
find the difference between the sum of odd and even position digits


*/



class Solution {
public:
   void sum_pos(string s) {
      int len = s.length();
      int odd_sum = 0;
      int even_sum = 0;
      for (int i = 1 ; i <= len; i++) {
         if (i % 2 != 0) {
            odd_sum += s[i - 1] - 48;
         }
         else {
            even_sum += s[i - 1] - 48;
         }

      }
      cout << abs(odd_sum - even_sum) << endl;

   }

};






int main () {
   cp();
   Solution op;
   int t;
   cin >> t;
   while (t--) {
      string n;
      cin >> n;
      op.sum_pos(n);

   }


}


