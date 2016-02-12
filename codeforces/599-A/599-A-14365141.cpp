// Anve$hi $hukla
// Until the lion learns how to write, every story will glorify the hunter.

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

inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

const int Maxn = 200005;
int main(){
  fastIO();
  unsigned long long d1,d2,d3,Ans,Z1,Z2,Z3;
  cin >> d1 >> d2 >> d3;
  Z1 = 2*(d1+d3);
  Z2 = 2*(d2+d3);
  Z3 = (d1+d2+d3);
  Ans = 2*(d1+d2);
  Ans = min(Ans,Z1);
  Ans = min(Ans,Z2);
  Ans = min(Ans,Z3);
  cout << Ans << endl;
  return 0;
}