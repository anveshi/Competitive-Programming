#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		unsigned long long int n,k,ans1,ans2;
		scanf("%llu %llu",&n,&k);
		if(k!=0)
		{
		ans1=n/k;
		ans2=n%k;
		}
		else
		{
			ans1=0;
			ans2=n;
		}

		printf("%llu %llu\n",ans1,ans2);
	}
	return 0;
}