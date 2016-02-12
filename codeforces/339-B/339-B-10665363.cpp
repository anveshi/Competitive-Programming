#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
const LL MOD = 1000000007;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); 	
	cin.tie(NULL);
	LL i,j,m,n,ans=0,p,x;
	cin >> n >> m;
	p=1;
	for(i=0;i<m;i++){
		cin >> x;
		if(x>=p)ans+=(x-p);
		else ans+=(n-abs(x-p));
		p=x;
	}
	cout << ans << endl;
	return 0;
}