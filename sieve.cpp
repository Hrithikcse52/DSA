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



class Solution {
public:

   bool isPrime(int n) {
      if (n == 1) return false;
      for (int i = 2; i < sqrt(n) ; i++) {
         if (n % i == 0) return false;
      }
      return true;
   }



   bool prime[MAXN];
   void fillPrime() {
      for (int i = 1; i < MAXN; i++) {
         prime[i] = true;
      }
      prime[1] = false;
      for (int i = 2; i < MAXN; i++ ) {
         if (prime[i]) {
            for (int j = i * i; j < MAXN; j += i) {
               prime[j] = false;
            }
         }
         if (i * i > MAXN) break;
      }

   }




};




int main () {
   cp();
   Solution op;
   cout << op.isPrime(47) << endl;

   op.fillPrime();

   loop(0, MAXN) {
      cout << i  << "\t" << op.prime[i] << endl;
   }

   // cout << (item.isPrime(71) ? "hello" : "no");

}


