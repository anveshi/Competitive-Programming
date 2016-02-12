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
	LL ans =0,i,k,n,x;
	cin >> n >> k;
	if(k==1){
		map <LL,LL> M;M.clear();
		for(i=0;i<n;i++){
			cin >> x;
			M[x]++;
		}
		for(map<LL,LL>:: iterator it=M.begin();it!=M.end();it++){
			LL z = it->second;
			if(z>2){
				ans += ((z)*(z-1)*(z-2))/6;
			}
		}
		cout << ans << endl;
		return 0;
	}
	else{
		map < pair<LL,int>,LL > M;
		M.clear();
		for(i=0;i<n;i++){
			cin >> x;
			if(x%k==0){
        ans+=M[mp(x/k,2)];
				M[mp(x,3)]+=M[mp(x/k,2)];
				M[mp(x,2)]+=M[mp(x/k,1)];
			}
			M[mp(x,1)]++;
		}
		cout << ans << endl;
		return 0;
	}
	return 0;
}