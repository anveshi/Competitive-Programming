#include<bits/stdc++.h>
#define lol long long int
using namespace std;
const lol lol_max=numeric_limits<lol>::max();
const lol Mod = 1000000007;
lol n,m,l,r;
lol A[1005];
lol modpower(lol base, lol exponent){
	lol result = 1;
	while (exponent > 0){
		if (exponent % 2 == 1)
			result = (result * base) % Mod;
		exponent = exponent >> 1;
		base = (base * base) % Mod;
	}
	return result;
}
int main()
{
	lol T,i,x;
	scanf("%lld",&T);
	while(T--)
	{
		scanf("%lld%lld%lld%lld",&n,&m,&l,&r);
		for(i=m;i>0;i--)
		{
			x=m/i;
			A[i]=modpower(x,n);
			lol temp=2*i;
			while(temp<=m){
				A[i]-=A[temp];
				temp+=i;
			}
		}
		lol ans=0;
		for(i=l;i<=r;i++){
			ans+=A[i];
			ans%=Mod;
		}
		printf("%lld\n",ans);
	}
	return 0;
}