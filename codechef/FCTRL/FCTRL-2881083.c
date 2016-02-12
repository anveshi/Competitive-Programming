#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,i,k,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
	        count=0;
		k=5;
		while(n/k)
		{
			
			if(n/k)
			{
				count=count+n/k;	
			}
			else
				break;
			k*=5;
		}
		printf("%d\n",count);
	}
	return 0;
}