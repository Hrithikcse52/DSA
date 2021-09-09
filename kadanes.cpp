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


//Kadenes algo

class Solution {
public:
   int max_sub_array(vector<int> v) {
      int len = v.size();
      int csum = v[0];
      int osum = v[0];
      for (int i = 1 ; i < len ; i++) {
         if (csum >= 0)
            csum += v[i];
         else csum = v[i];

         if (csum > osum) osum = csum;
      }
      return osum;
   }

};


int main () {
   cp();
   Solution obj;
   int n;
   cin >> n;
   vector <int> arr(n);
   loop(0, n) cin >> arr[i];
   cout << obj.max_sub_array(arr);

}

