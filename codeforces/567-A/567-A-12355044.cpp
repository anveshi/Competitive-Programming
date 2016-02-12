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
LL a[100005];
int main(){
	LL n,i,m,M;
	cin >> n;
	for(i=1;i<=n;i++){
		cin >> a[i];
	}
	for(i=1;i<=n;i++){
		m = LONG_MAX;
		M = fabs(a[1]-a[i]);
		LL temp = fabs(a[i]-a[n]);
		M = max(M,temp);
		if(i!=1){
			m = fabs(a[i]-a[i-1]);
		}
		if(i!=n){
			LL z = fabs(a[i]-a[i+1]);
			m = min(m,z);
		}
		cout << m << " " << M << endl;
	}
	return 0;
}