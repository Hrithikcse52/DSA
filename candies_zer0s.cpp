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



// class Solution {
// public:

// };

int main () {
   cp();

   t (t) {
      int n;
      cin >> n;
      std::vector<int> a;
      int temp;
      int count = 0;
      for (int i = 0; i < n; i++) {
         cin >> temp;
         if (temp != 0) a.push_back(temp);
         else {
            count++;
         }
      }
      loop(0, count)a.push_back(0);

      for (int i = 0; i < (int)a.size(); i++)cout << a[i];



      cout << endl;
   }


}

