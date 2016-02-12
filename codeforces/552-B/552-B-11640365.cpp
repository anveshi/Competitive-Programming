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
LL gcd1(LL a,LL b){while(b){LL t=a%b;b=a;a=t;}return a;}
int main(){
  map <LL,LL>m;vector <LL> v;v.clear();v.pb(0);v.pb(9);
  m.clear();
  m[0]=0;
  m[9]=9;
  LL pre,next,cnt,tmp;
  pre = 9;
  next = 99;cnt=2;
  while(next<99999999999999){
    v.pb(next);
    m[next] = m[pre] + cnt*(next-pre);
    cnt++;
    tmp = next*10+9;
    pre = next;
    next = tmp;
  }
  LL n;
  cin >> n;
  for(LL i=0;i<v.size();i++){
//    cout << v[i] << endl;
    if(v[i]<=n && v[i+1]>n){
      LL ans = m[v[i]] + (n-v[i])*(i+1);
      cout << ans << endl;
      return 0;
    }
  }
	return 0;}