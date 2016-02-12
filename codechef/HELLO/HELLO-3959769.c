#include<stdio.h>
#define epsilon 0.0000001
int main()
{
	int T,i,ans;
	float default_rate,minutes,n,money,x,M,R,C;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%f %f %f",&default_rate,&minutes,&n);
		money=default_rate*minutes; 
		ans = 0;
		for(i=1;i<=n;i++)
		{
			scanf("%f %f %f",&M,&R,&C);
			x=C/M+R*minutes;
			if((money - x)>epsilon)
			{
				ans = i;
				money=x;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}