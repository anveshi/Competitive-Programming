#include<stdio.h>
int main()
{
	int t,a,b,c,d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		printf("%f\n",(float)(a)/(a+b));
	}
	return 0;
}