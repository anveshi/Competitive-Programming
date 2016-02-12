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
	int n,m,val,ans,i,j;
	val = 0;
	string s[55];
	val^=(1<<('f'-'a'));
	val^=(1<<('a'-'a'));
	val^=(1<<('c'-'a'));
	val^=(1<<('e'-'a'));
	cin >> n >> m;	
	for(i=0;i<n;i++){
		cin >> s[i];
	}
	if(n<2 || m<2){cout << 0 << endl;return 0;}
	ans = 0;
	for(i=0;i<=n-2;i++){
		for(j=0;j<=m-2;j++){
			int temp = 0;
			temp ^= (1<<(s[i][j]-'a'));
			temp ^= (1<<(s[i][j+1]-'a'));
			temp ^= (1<<(s[i+1][j]-'a'));
			temp ^= (1<<(s[i+1][j+1]-'a'));
			if(temp==val)
				ans++;
		}
	}
	cout << ans << endl;
	return 0;
}