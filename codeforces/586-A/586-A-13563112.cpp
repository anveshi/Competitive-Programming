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
const LL Maxn = 4005;
const LL Mod = 1000000007;

inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
LL v[Maxn],d[Maxn],p[Maxn];
int main(){ 
  fastIO();
  LL n,x;
  cin >> n;
  vector <int> v;
  v.clear();
  for(int i=0;i<n;i++){
    cin >>x;
    if(x==1)
      v.push_back(i);
  }
  int ans = (int)v.size();
  for(int i=1;i<(int)v.size();i++){
    if(v[i]-v[i-1]==2)
      ans++;
  }
  cout << ans << endl;
  return 0;
}