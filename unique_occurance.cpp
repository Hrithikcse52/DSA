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


1207. Unique Number of Occurrences leetCode


*/



class Solution {
public:
   bool uniqueOccurrences(vector<int>& arr) {

      int len = arr.size();
      map<int, int> num;

      for (int i = 0; i < len; i++) {
         num[arr[i]]++;
      }
      vector <int> temp;

      for (auto it : num) {

         temp.push_back(it.second);
      }

      sort(temp.begin(), temp.end());
      int siz = temp.size();
      for (int i = 0 ; i < siz - 1; i++) {
         if (temp[i] == temp[i + 1] ) return false;
      }
      return true;

//             set<int> cou;
//         for(auto it:num){
//             cou.insert(it.second);
//             cout<<it.first<<"\t"<<it.second<<endl;

//         }
//         cout<<"------------------------"<<endl;

//         return cou.size() == num.size();

      // return "";
   }
};

int main () {
   cp();
   t(t) {

      Solution op;
      int n;
      cin >> n;
      vector<int> arr(n);
      for (int i = 0; i < n; i++) {
         cin >> arr[i];
      }
      string res = op.uniqueOccurrences(arr) ? "True" : "False";
      cout << res << endl;
   }



}

