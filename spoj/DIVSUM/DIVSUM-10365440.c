#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,count,i,s,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		s=sqrt(n);
		if(n==0 || n==1)
		printf("0\n");
		else
		{
			count=0;
			for(i=1;i<=s;i++)
			{

				if(n%i==0)
				{
					k=n/i;
					count=count+i+k;
				}
			}
			if(s*s==n)
				count=count-s;
			printf("%d\n",count-n);
		}
	}
	return 0;
}

				
