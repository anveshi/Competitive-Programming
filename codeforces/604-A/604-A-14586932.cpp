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
double m[6],w[6],hs,hu,ans;
double score[] = {500, 1000, 1500, 2000, 2500};
int main(){
  fastIO();
  for(int i=0;i<5;i++){
    cin >> m[i];
  }
  for(int i=0;i<5;i++){
    cin >> w[i];
  }
  cin >> hs >> hu;
  for(int i=0;i<5;i++){
    ans += max(0.3*score[i], (1.0-m[i]/250)*score[i] - 50*w[i]);
  }
  ans += 100*hs;
  ans -= 50*hu;
  cout << ans << endl;
  return 0;
}