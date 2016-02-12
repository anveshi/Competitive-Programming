#include<stdio.h>
#include<math.h>
int main()
{
	long long int T,i,j,L,D,S,C,k;
	scanf("%lld",&T);
	while(T--)
	{
		scanf("%lld %lld %lld %lld",&L,&D,&S,&C);
		j=0;
		for(i=0;i<D;i++)
		{
			k=S*pow(1+C,i);
			//printf("%lld\n",k);
			if(k>=L)
			{
				printf("ALIVE AND KICKING\n");
				j++;
				break;
			}
			else
				continue;
		}
		if(j==0)
			printf("DEAD AND ROTTING\n");
	}
	return 0;
}