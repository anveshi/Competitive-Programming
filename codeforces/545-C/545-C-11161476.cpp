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
	VPII v;
	v.clear();
	LL n,i,j,x,y;
	cin >> n;
	pair <LL,LL> p[100005];
	for(i=0;i<n;i++){
		cin >> p[i].ff >> p[i].ss;
	}
	sort(p,p+n);
//	for(i=0;i<n;i++)
//		trace2(p[i].ff,p[i].ss);
	for(i=0;i<n;i++){
		x = p[i].ff;y=p[i].ss;
		if(i==n-1)
			v.pb(mp(x+y,x));
		else{
			if(p[i+1].ff>x+y)
				v.pb(mp(x+y,x));
		}
		if(i==0)
			v.pb(mp(x,x-y));
		else{
			if(p[i-1].ff<x-y)
				v.pb(mp(x,x-y));
		}
	}
	sort(v.begin(),v.end());
	LL ans=0,lf=-MOD;
	int sz = v.size();
	for(i=0;i<sz;i++){
		//trace2(v[i].first,v[i].second);
		//trace2(lf,v[i].second);
		if(v[i].second>lf){ans++;
			lf = v[i].first;
		//	trace2(v[i].second,v[i].first);
		}
	}
	cout << ans << endl;
	return 0;
}