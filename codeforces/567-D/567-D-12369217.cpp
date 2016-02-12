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
	LL n,k,a,ans=-1,pos,x,m,i;
	map <LL,LL> M;M.clear();
	map<LL,LL>::iterator itlow,itup;
	cin >> n  >> k >> a;
	cin >> m;
	pos = (n+1)/(a+1);
	M[0]=1;M[n+1]=1;
	for(i=1;i<=m;i++){
		//trace1(pos);
		cin >> x;
		M[x]=1;
		itlow=M.lower_bound (x);  
        itup=M.upper_bound (x);
        itlow--;
        LL d,u;
        d = itlow->first;
        u = itup->first;
        pos -= (u-d)/(a+1);
        pos += (x-d)/(a+1);
        pos += (u-x)/(a+1);
      //  trace4(d,x,u,pos);
        if(pos<k && ans==-1)ans=i;
	}
	cout << ans << endl;
	return 0;
}