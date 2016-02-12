#include"stdio.h"
int main()
{
	int t,n,p,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);   //no of cupcakes.
		//print  10----6
		//11---6 12---7 13---7 14---8
		//n---n/2+1
		printf("%d\n",n/2+1);

	}
	return 0;
}