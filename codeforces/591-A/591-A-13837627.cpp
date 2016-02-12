#include <bits/stdc++.h>
using namespace std;

#define TRACE
#ifdef TRACE
#define trace1(x)       cerr<< #x <<": "<<x<<endl;
#define trace2(x, y)    cerr<< #x <<": "<<x<<" | "<< #y <<": "<<y<< endl;
#define trace3(x, y, z) cerr<< #x <<": "<<x<<" | "<< #y <<": "<<y<<" | "<< #z <<": "<<z<< endl;
#else
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#endif

typedef long long LL;
const LL Maxn = 1000005;
const LL Mod = 1000000007;

inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

int main(){ 
  fastIO();
  int l,p,q;
  cin >> l >>  p >> q;
  cout.precision(10);
  cout  << fixed;
  double ans,temp;
  temp = (double)((l)/(double)(p+q));
  ans = (double)(p*temp);
  cout << ans << endl;
  return 0;
}