#include<stdio.h>
int main()
{
	int t,n,k,i,j,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		int a[n+1];
		count=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]%2==0)
				count++;
		}
	//	printf("%d\n",count);
		if(k==0)
		{
			if(n-count>0)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
		{
		if(count >= k)
			printf("YES\n");
		else
			printf("NO\n");	
		}
	}

	return 0;
}