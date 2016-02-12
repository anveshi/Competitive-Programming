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

const int Maxn = 1005;
int cnt[Maxn];
int main(){
  fastIO();
  int n,m,x,y;
  cin >> n >> m;
  for(int i=0;i<n;i++){
    cin >> x;
    for(int j=0;j<x;j++){
      cin >> y;
      cnt[y] = 1;
    }
  }
  int Ok = 1;
  for(int i=1;i<=m;i++){
    if(cnt[i]==0)
      Ok = 0;
  }
  if(Ok)
    cout << "YES" << endl;
  else
    cout << "NO" <<endl;

  return 0;
}