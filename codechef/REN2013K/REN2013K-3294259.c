#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		unsigned long long int a,b,c;
		scanf("%llu %llu",&a,&b);
		if(a==b)
			printf("0\n");
		else
		{
		c=((b-a+1)*(b-a))/2;
		printf("%llu\n",c);
		}
	}
	return 0;
}