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

switch (s[i]) {
            case ('A'):
               s[i] = 10;
               break;
            case ('B'):
               s[i] = 11;
               break;
            case ('C'):
               s[i] = 12;
               break;
            case ('D'):
               s[i] = 13;
               break;
            case ('E'):
               s[i] = 14;
               break;
            case ('F'):
               s[i] = 15;
               break;
            case ('G'):
               s[i] = 16;
               break;
            }

*/




/*

Given a maximum of four digit to the base 17 (10 – A, 11 – B, 12 – C, 13 – D … 16 – G} as input, output its decimal value.


*/



class Solution {
public:
   void con_dec(string s) {
      int ans = 0;
      int power = 0;
      int len = s.length();
      int val;
      for (int i = len - 1; i >= 0 ; i--) {
         if (s[i] >= 65 && s[i] <= 71) {
            val = s[i] - 65 + 10;
         }
         else if (s[i] >= 48 && s[i] <= 57) {
            val = s[i] - 48 ;
         }
         ans += val * ( pow(17, power));
         power++;
      }
      cout << ans << endl;


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
      op.con_dec(n);

   }


}


