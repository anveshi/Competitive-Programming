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
  int n,min1,min2,min3,max1,max2,max3,x,y,z;
  cin >> n ;
  cin >> min1 >> max1;
  cin >> min2 >> max2;
  cin >> min3 >> max3;
  x = min(max1,n-min2-min3);
  y = min(max2,n-x-min3);
  z = min(max3,n-x-y);
  assert(x+y+z==n);
  cout << x << " " << y << " "<< z << endl;
	return 0;
}