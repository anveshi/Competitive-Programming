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
const LL Maxn = 500005;
const LL Mod = 1000000007;
const int inf = 10000001;
inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
int cnt[105];
int main(){
  fastIO();
  int n,k,z,ans=0,x;
  cin >> n >> k;
  z = n/k;
  for(int i=0;i<n;i++){
    cin >> x;
    cnt[x]++;
  }
  for(int i=1;i<=n;i++){
    if(cnt[i]>z){
      ans += cnt[i]-z;
    }
  }
  cout << ans << endl;
 
  return 0;
}