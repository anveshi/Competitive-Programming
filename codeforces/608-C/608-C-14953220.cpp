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

const int Maxn = 100005;
pair <int,int> P[Maxn];
int Dp[Maxn],Mp[Maxn];
int main(){
  fastIO();
  int n,x,y;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> x >> y;
    P[i] = {x,y};
  }
  sort(P,P+n);
  vector <int> v(n);
  for(int i=0;i<n;i++){
    v[i] = P[i].first;
  }

  Dp[0] = 0;

  for(int i=1;i<n;i++){
    int idx = lower_bound(v.begin(), v.end(),P[i].first-P[i].second) - v.begin();
    int z = (idx>0?Dp[idx-1]:0);
    Dp[i] = i-idx + z;
  }

  int Ans = n;
  for(int i=0;i<n;i++){
    Mp[i] = n-1-i + Dp[i];
    Ans = min(Ans,Mp[i]);
  }

  cout << Ans << endl;
  return 0;
}