#include<bits/stdc++.h>
using namespace std;
#define lol long long int
lol a[100005];
lol summ(lol l)
{
	return (l*(l+1))/2;
}
int main()
{
	lol t,n,i,k;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&k);
		a[0]=0;
		for(i=1;i<=k;i++)
			scanf("%lld",a+i);
		a[k+1]=n+1;
		sort(a,a+k+2);
		lol Possible=0LL;
		for(i=1;i<=k+1;i++)
		{
			Possible=Possible+summ(a[i]-1)-summ(a[i-1]);
			if(Possible<a[i])
				break;
		}
		if(Possible&1)
			printf("Mom\n");
		else 
			printf("Chef\n");
	}
	return 0;
}