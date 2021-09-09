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

struct point {
   int x;
   int y;
};



/*

Our hoary culture had several great persons since time immemorial and king vikramaditya’s nava ratnas (nine gems) belongs to this ilk.They are named in the following shloka:


Among these, Varahamihira was an astrologer of eminence and his book Brihat Jataak is recokened as the ultimate authority in astrology.

He was once talking with Amarasimha,another gem among the nava ratnas and the author of Sanskrit thesaurus, Amarakosha.

Amarasimha wanted to know the final position of a person, who starts from the origin 0 0 and travels per following scheme.

He first turns and travels 10 units of distance
His second turn is upward for 20 units
Third turn is to the left for 30 units
Fourth turn is the downward for 40 units
Fifth turn is to the right(again) for 50 units
… And thus he travels, every time increasing the travel distance by 10 units.



case 1
in  3
out 20 20


*/

class Solution {
public:
   point move(int n) {
      point current_pos;

      current_pos.x = 0;
      current_pos.y = 0;
      char dir =  'R';
      int distance = 10;

      while (n--) {
         switch (dir) {
         case ('R'):
            current_pos.x += distance;
            dir = 'U';
            distance += 10;
            break;
         case ('U'):
            current_pos.y += distance;
            dir = 'L';
            distance += 10;
            break;
         case ('L'):
            current_pos.x -= distance;
            dir = 'D';
            distance += 10;
            break;
         case ('D'):
            current_pos.y -= distance;
            dir = 'A';
            distance += 10;
            break;
         case ('A'):
            current_pos.x += distance;
            dir = 'R';
            distance += 10;
            break;
         }
      }

      return current_pos;

   }




};




int main () {
   cp();
   Solution op;
   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      point ans_pos = op.move(n);
      cout << ans_pos.x << " "  << ans_pos.y << endl;

   }


}


