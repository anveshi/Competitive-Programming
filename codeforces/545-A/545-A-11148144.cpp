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
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<PII> VPII;
LL gcd1(LL a,LL b){while(b){LL t=a%b;b=a;a=t;}return a;}
int cnt[105];
int main(){
	int i,j,n,a[105][105];
	cin >> n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin >> a[i][j];
			if(a[i][j]==1)
				cnt[i]++;
			if(a[i][j]==2)
				cnt[j]++;
			if(a[i][j]==3){
				cnt[i]++;
				cnt[j]++;
			}
		}
	}
	int ans=0;set <int> S;S.clear();
	for(i=1;i<=n;i++){
		if(cnt[i]==0){
			ans++;
			S.insert(i);
		}
	}
	cout << ans << endl;
	tr(S,it)
		cout << *it << " ";
	if(ans)cout << endl;
	return 0;
}