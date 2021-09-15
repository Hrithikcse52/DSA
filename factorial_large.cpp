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
   void multiply(int n, vector<int>& number) {
      int carry = 0;
      for (int i = 0; i < (int) number.size(); i++) {
         int num = n * number[i];
         number[i] = (char)((num + carry) % 10);
         carry = (num + carry) / 10;
      }
      while (carry) {
         number.push_back(carry % 10);
         carry /= 10;
      }
   }
   vector<int> factorial(int N) {
      vector<int> number;
      number.push_back(1);
      for (int i = 2; i <= N; i++)
         multiply(i, number);
      reverse(number.begin(), number.end());
      return number;
   }
};

int main () {
   cp();

   t(t) {

      int n;
      cin >> n;
      Solution op;
      vector<int> result = op.factorial(n);
      int len = result.size();
      for (int i = 0; i < len; ++i) {
         cout << result[i];
      }
      cout << endl;


   }
   return 0;
}

