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


struct equation {
   int x, y, gcd;
};

//EUCLIDEAN ALGORITHM

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


//functional way of doing extended euclid

   // int extendedEuclidean(int a, int b, int& x, int& y) {
   //    if (b == 0) {
   //       x = 1;
   //       y = 0;
   //       return a;
   //    }
   //    int x1, y1;
   //    int d = extendedEuclidean(b, a % b, x1, y1);
   //    x = y1;
   //    y = x1 - (a / b) * y1;
   //    return d;
   // }


//Struct Way of doing extended

   equation extendedEuclidean(int a, int b) {
      if (b == 0) {
         equation ans;
         ans.x = 1;
         ans.y = 0;
         ans.gcd = a;
         return ans;
      }
      equation small = extendedEuclidean(b, a % b);
      equation ans;
      ans.x = small.y;
      ans.gcd = small.gcd;
      ans.y = small.x - (a / b) * small.y;
      return ans;
   }



};




int main () {
   cp();
   Solution ob;


   // int x, y;
   // cout << extendedEuclidean(81, 57, x, y);//x y are varible on which the function will write the result;
   // cout << x << y;


   equation res = ob.extendedEuclidean(81, 57);
   cout << res.x << " " << res.y << " " << res.gcd;

}


