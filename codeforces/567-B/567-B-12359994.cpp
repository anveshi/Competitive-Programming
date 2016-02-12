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
int main(){
	__;
	LL n,x;vector <LL> v,z;v.clear();z.clear();
	string s;
	cin >> n;
	map <LL,LL> M;
	M.clear(); 
	for(int i=0;i<n;i++){
		cin >> s;
		cin >> x;
		if(s[0]=='+'){
			M[x]=1;
			z.pb(x);
		}
		else{
			z.pb(-x);
			if(M[x]==1){
				M[x]=0;
			}
			else{
				v.pb(x);
			}
		}
	}
	LL sz = z.size();
	for(int i=0;i<sz;i++){
		v.pb(z[i]);
	}
	sz = v.size();
	LL ans = 0,cnt=0;
	for(int i=0;i<sz;i++){
		//trace1(v[i]);
		if(v[i]>0){
			cnt++;
		}
		else  cnt--;
		ans = max(ans,cnt);
		//trace2(ans,cnt);
	}
	cout << ans << endl;
	return 0;
}