#include<stdio.h>
int main()
{
	int n,flag;
	flag=1;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==42)
			flag=0;
		if(flag)
			printf("%d\n",n);
	}
	return 0;
}
