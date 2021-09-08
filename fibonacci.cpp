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







// int main () {
//    cp();
//    t(t) {

//    }


// }



struct matrix {
   int a[2][2];
};

class Solution {
public:
   matrix identity() {
      matrix id;
      id.a[0][0] = 1, id.a[0][1] = 0;
      id.a[1][0] = 0, id.a[1][1] = 1;
      return id;
   }

   matrix mul (matrix A, matrix B) {
      matrix C;
      for (int row = 0; row < 2 ; row++ ) {
         for (int col = 0 ; col < 2 ; col++) {
            int here = 0;
            for (int i = 0 ; i < 2 ; i++)
               here += A.a[row][i] * B.a[i][col];
            C.a[row][col] = here;
         }
      }
      return C;
   }
   matrix pow(matrix A, int n) {
      if (n == 0) return identity();
      matrix x = pow(A, n / 2);
      if (n % 2 == 0) {
         return mul(x , x);
      }
      else {
         return mul(mul(x, x), A);
      }

   }



   int getNthFibonacci(int n) {
      matrix fib;
      fib.a[0][0] = 1, fib.a[0][1] = 1;
      fib.a[1][0] = 1, fib.a[1][1] = 0;
      return pow(fib, n).a[0][0];

      // return fib;
   }

};






int main () {
   cp();
   Solution ob;
   // matrix f1, f2;
   // f1.a[0][0] = 2, f1.a[0][1] = 2;
   // f1.a[1][0] = 4, f1.a[1][1] = 3;

   // f2.a[0][0] = 3, f2.a[0][1] = 2;
   // f2.a[1][0] = 4, f2.a[1][1] = 4;

   // matrix res;

   // res = ob.mul(f1, f2);

   // for (int i = 0; i < 2; ++i) {
   //    for (int j = 0; j < 2; ++j) {
   //       cout << res.a[i][j];
   //    }
   //    cout << endl;
   // }


   cout << ob.getNthFibonacci(0) << endl;

   return 0;
}

