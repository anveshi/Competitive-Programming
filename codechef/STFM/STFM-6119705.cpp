#include<bits/stdc++.h>
#define lol long long int
using namespace std;
lol a[10000003];
lol pa[10000003];
lol p[100005],ans;
int n,m,Max;
lol fun(lol x){
	lol a1,a2,a3,z,z1,z2,ret;
	if(x+1>10000001){
		//z2=m-1;
		z2=pa[10000001];
	}
	else{
	 	//z2=(a[x+1]+m-1)%m;
		z2=(pa[x])%m;
	}

	if(x&1){
		a1=x;a2=x;a3=(x+1)/2;
		a1%=m;a2%=m;a3%=m;
	}
	else{
		a1=x/2;a2=x;a3=(x+1);
		a1%=m;a2%=m;a3%=m;
	}
	 z=(a1*a2)%m;
	 z1=(z*a3)%m;
	 ret = (z1+z2)%m;
	 return ret;
}
int main(){
	ans= 0LL;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%lld",&p[i]);
	a[0]=1;
	pa[0]=0;
	for(int i=1;i<=10000001;i++){
		a[i]=(a[i-1]*i)%m;
		pa[i]=(pa[i-1]+(i*a[i])%m)%m;
	}
	for(int i=0;i<n;i++){
		ans = ans + fun(p[i]);
		ans%=m;
	}
	printf("%lld\n",ans);
	return 0;
}