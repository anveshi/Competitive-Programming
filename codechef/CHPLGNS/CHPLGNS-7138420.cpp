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
LL x[100005],y[100005],ans[100005];
pair <LL,LL> A[100005];
int main(){
  LL t,n,i,j,k,m,area;
  scanf("%lld",&t);
  while(t--){
    scanf("%lld",&n);
    for(i=0;i<n;i++){
      scanf("%lld",&m);
      for(j=0;j<m;j++)
        scanf("%lld %lld",x+j,y+j);
      area = 0;k=m-1;
      for(j=0;j<m;j++){
        area+=(x[k]+x[j])*(y[k]-y[j]);k=j;
      } 
      A[i].first = fabs(area);
      A[i].second = i;
      //  trace1(A[i].first);
    }
    sort(A,A+n);
    for(i=0;i<n;i++)ans[A[i].ss]=i;
    for(i=0;i<n;i++)printf("%lld ",ans[i]);printf("\n");
  }
  return 0;
}