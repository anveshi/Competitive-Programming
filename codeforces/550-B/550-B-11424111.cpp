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
	LL a[100];
	LL n,l,r,x,m,M,ans,sz,s,res=0,i,j;
	cin >> n >> l  >> r >> x;
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	sz = ((1LL)<<n);
	for(i=0;i<sz;i++){
		if(__builtin_popcount(i)<2)continue;
		else{
			m = 10000000;
			M = -10000000;
			s=0;
			for(j=0;j<n;j++){
				if(i&(1LL<<j)){
					if(a[j]<m)m=a[j];
					if(a[j]>M)M=a[j];
					s+=a[j];
				}
			}
			if((s<=r) && (s>=l) && ((M-m)>=x))res++; 
		}
	}
	cout << res << endl;
	return 0;
}