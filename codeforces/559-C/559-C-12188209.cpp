#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define all(c) (c).begin(),(c).end() 
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++) 
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define TRACE
#ifdef TRACE
#define trace1(x)     	   cerr << #x << ": " << x << endl;
#define trace2(x, y)       cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)    cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#else
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#define trace4(a, b, c, d)
#endif
typedef long long LL;
const LL MOD = 1000000007;
typedef pair<LL,LL> PII;
typedef vector<LL> VI;
typedef vector<PII> VPII;
const LL Maxn = 200005;
LL f[Maxn],dp[2345];
pair <LL,LL> p[2345];
LL mpow(LL a,LL b) {LL res=1;a%=MOD;for(;b;b>>=1){if(b&1)res=res*a%MOD;a=a*a%MOD;}return res;}
LL nCr(LL x,LL y) {
  LL ret = (f[x+y]*mpow(f[x]*f[y],MOD-2))%MOD;
  return ret;
}
int main(){
  __;
  LL h,w,n;
  cin >> h >> w >> n;
  f[0]=1;
  for(LL i=1;i<Maxn;i++){
    f[i] = (f[i-1]*i)%MOD;
  }
  p[0].ff=1;p[1].ff=1;
  for(int i=1;i<=n;i++){
    cin >> p[i].ff >> p[i].ss;
  }
  p[n+1].ff=h;p[n+1].ss=w;
  sort(p,p+n+2);
  dp[0]=1;
  for(int i=1;i<n+2;i++){
    dp[i] = nCr(p[i].ff-1,p[i].ss-1);
    for(int j=1;j<i;j++){
      if(p[j].ff<=p[i].ff && p[j].ss<=p[i].ss){
        dp[i] = (dp[i] - (nCr(p[i].ff-p[j].ff,p[i].ss-p[j].ss)*dp[j]))%MOD;
      }
    }
  }
  cout << (dp[n+1]+MOD)%MOD << endl;
  return 0;
}