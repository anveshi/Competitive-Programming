#include <bits/stdc++.h>
#define LL long long int
const LL Mod = (LL)1e9+7;
using namespace std;
LL a[100000+5];
LL p[100000+5];
LL n;
void pre(){
	p[0]=1;
	for(LL i=1;i<=100005;i++){
		p[i] = (p[i-1]*2)%Mod;
	}
}

LL f(LL i){
	return (p[i-1]-p[n-i])*a[i];
}
int main(){
	pre();
	LL t;
	LL ans;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		for(LL i=1 ; i<=n ; i++){
			scanf("%lld",a+i);
		}
		sort(a+1,a+n+1);
		ans = 0LL;
		for(int i=1;i<=n;i++){
			ans += f(i);
			ans %= Mod;
		}
		printf("%lld\n",ans);
	}
	return 0;
}