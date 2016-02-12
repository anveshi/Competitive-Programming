#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==42)
			break;
		printf("%d\n",n);
	}
	while(scanf("%d",&n)!=EOF);
	return 0;
}