#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
LL ans[1000001],z;
const LL mod = 1000000003;
void precompute(){
	for(LL i=1;i<1000001;i++){
		ans[i] = ans[i-1];
		z = ((i*(i+1))/2)%mod;
		ans[i]+=(z*z)%mod;
		ans[i]%=mod;
	}
	return ;
}
int main(){
	LL T,n;
	precompute();
	scanf("%lld",&T);
	while(T--){
		scanf("%lld",&n);
		printf("%lld\n",ans[n]);
	}
	return 0;
}


