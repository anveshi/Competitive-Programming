#include<bits/stdc++.h>
#define LL long long int
using namespace std;
LL fun(LL x){
	LL A = sqrt(x)-1;
	for(LL i=A;;i++){
		if(i*(i+1)<=x && (i+1)*(i+2)>x){
			return i;
		}
	}
}
int main(){
	LL T,n,s,ans1,ans,val;
	scanf("%lld",&T);
	while(T--){
		scanf("%lld %lld",&n,&s);
		val = (s-n);
		ans1 = fun(2*(s-n));
		ans = n-(ans1+1);
		printf("%lld\n",ans);
	}
	return 0;
}