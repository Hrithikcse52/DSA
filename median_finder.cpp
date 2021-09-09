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


class MedianFinder {
public:

   priority_queue<int> max_heap;
   priority_queue<int, vector<int>, greater<int>> min_heap;

   void addNum(int num) {

      max_heap.push(num);
      min_heap.push(max_heap.top());
      max_heap.pop();
      if (max_heap.size() < min_heap.size() ) {
         max_heap.push(min_heap.top());
         min_heap.pop();
      }


   }

   double findMedian() {
      if (max_heap.size() > min_heap.size())
         return max_heap.top();
      else return (max_heap.top() + min_heap.top()) * 0.5;

   }
};


int main () {
   // cp();
   MedianFinder obj;

   obj.addNum(1);
   obj.addNum(2);
   obj.addNum(8);
   obj.addNum(6);
   obj.addNum(10);
   obj.addNum(7);
   obj.addNum(3);
   obj.addNum(19);
   obj.addNum(19);
   cout << obj.findMedian();



}

