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
LL mpow(LL a, LL n){LL ret=1;LL b=a;while(n){if(n&1) ret=(ret*b)%MOD;b=(b*b)%MOD;n>>=1;}return (LL)ret;}
int main(){
  LL t,s,x,i,temp,ans,n,k;
  cin >> t;
  while(t--){
    cin >> n >> k;
    s = 0 , ans=0;
    for(i=0;i<n;i++){
      cin >> x;
      x%=2;
      s = (s+x)%2; 
    }
    for(i=0;i<k;i++){
      //temp = s;
      ans = (s+1)%2;
      s = (s+ans)%2;
    }
    if(ans==0)cout << "even" << endl;
    else cout << "odd" << endl;
  }
	return 0;
}