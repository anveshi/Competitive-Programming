#include<bits/stdc++.h>
#define lol long long int
using namespace std;
int a[10000002];
lol p[100005],ans;
int n,m,Max;
lol fun(lol x){
	lol a1,a2,a3,z,z1,z2;
	lol val = 0LL;
	if(x+1>Max)z2=m-1;
	else{
	 	z2=(a[x+1]-1+m)%m;
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
	 return (z2+z1)%m;
}
int main(){
	ans= 0LL;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%lld",&p[i]);
	a[0]=1;
	for(int i=1;i<=m;i++){
		a[i]=(a[i-1]*i)%m;
		if(a[i]==0){Max=i;}
	}
	for(int i=0;i<n;i++){
		ans = ans + fun(p[i]);
		ans%=m;
	}
	printf("%lld\n",ans);
	return 0;
}