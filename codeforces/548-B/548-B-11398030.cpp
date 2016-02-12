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
bool a[567][567];
int row[505];
int main(){
	__;
	int n,m,q,i,j,ans;
	cin >>  n >> m >> q;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> a[i][j];
		}
	}
	for(i=1;i<=n;i++){
		int t=0;row[i]=0;
		for(j=1;j<=m;j++){
			if(a[i][j]){
				t++;
				row[i] = max(row[i],t);
			}
			else t=0;
		}
	}
	for(i=0;i<q;i++){
		int x,y;
		cin >> x >> y;
		a[x][y]=1-a[x][y];int t=0;row[x]=0;
		t=0;
		for(j=1;j<=m;j++){
			if(a[x][j]){
				t++;
				row[x] = max(row[x],t); 
			}
			else t=0;
		}
		ans = 0;
		for(j=1;j<=n;j++){
			ans = max(ans,row[j]);
		}
		cout << ans << endl;
	}
	return 0;
}