#include <bits/stdc++.h>
#include <bitset>
#include <math.h>
#include <algorithm>



using namespace std;


#define ll long long int
#define ld long  double
#define debug(x) cout<< #x << " " << x << '\n';
#define loop(s,n) for(int i = s; i< (n) ; i ++ )
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


1207. Unique Number of Occurrences leetCode


*/


class Solution {
public:


   bool find3Numbers(vector<int> a, int n, int X) {
      sort(a.begin(), a.end()); //1 4 6 8 10 45
      int l, r;
      for (int i = 0; i < n - 2; i++) {
         l = i + 1;
         r = n - 1;
         while (l < r) {
            if (a[i] + a[l] + a[r] == X) {
               return true;
            }
            else if (a[i] + a[l] + a[r] < X) {
               l++;
            }
            else {
               r--;
            }
         }
      }
      return false;

   }

};


int main () {
   cp();

   t(t) {

      int n, k;
      cin >> n >> k;
      std::vector<int> v(n);
      for (int i = 0; i < n; i++) {
         cin >> v[i];
      }

      // for (int i = 0; i < n; i++) {
      //    cout << v[i] << endl;
      // }
      Solution op;
      cout << op.find3Numbers(v, n, k);
   }
   return 0;
}

