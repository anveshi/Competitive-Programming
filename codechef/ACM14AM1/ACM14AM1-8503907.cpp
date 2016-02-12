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

void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

int a[1001];
int main(){  
  fastIO();
  int t,n,m,p,ans;
  cin >> t;
  while(t--){
    ans = 0;
    cin >> n >> p;
    for(int i=0;i<n;i++){
      cin >> a[i];
      if(a[i]>=p)
        ans++;
    }
    cout << ans << endl;
  }
  ans = 0;
  for(int i=0;i<Mod;i++){
    ans++;
  }
  return 0;
}