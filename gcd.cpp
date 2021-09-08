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
   int gcd(int a, int b) {
      if (b == 0) {
         return a;
      }
      else {
         return gcd( b, a % b);
      }
   }

};




int main () {
   cp();
   Solution ob;
   cout << ob.gcd(16, 12);

}


