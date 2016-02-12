#include<stdio.h>
int main()
{
	long long int t,r;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&r);
		printf("%lld\n",2*r*r);
	}
	return 0;
}