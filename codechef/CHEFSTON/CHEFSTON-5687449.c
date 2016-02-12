#include<stdio.h>
#include<limits.h>
long long int MAX(long long int a,long long int b)
{
	return (a>b?a:b);
}
int main()
{
	long long int T,n,k,i,val,ans;
	scanf("%lld",&T);
	while(T--)
	{
		scanf("%lld %lld",&n,&k);
		long long int a[n],b[n];
		for(i=0;i<n;i++)
			scanf("%lld",a+i);
		for(i=0;i<n;i++)
			scanf("%lld",b+i);
		ans=LONG_MIN;
		for(i=0;i<n;i++)
		{
			val=k/a[i];
			val*=b[i];
			ans=MAX(val,ans);
		}
		printf("%lld\n",ans);
	}

	return 0;
}