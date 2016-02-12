#include"stdio.h"
int main()
{
	int t,n,p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		n%2==0?printf("%d\n",n):printf("%d\n",n-1);
	}
	return 0;
}