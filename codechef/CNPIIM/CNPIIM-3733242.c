#include<stdio.h>
#define max 1562501
long long int array[max];
long long int pairs(long long int k)
{
	if(array[k]!=-1)return array[k];
	else
	{
	long long int i,x=0;
	for(i=1;i*i<=k;i++)
		x=x+2*(k/i)-1-2*(i-1);
	array[k]=x;
	return array[k];
	}
}

int main()
{
	long long int i,j,t,a,b,n,result,nos,x;
	scanf("%lld",&t);
	for(i=0;i<max;i++)
	{
		array[i]=-1;
	}
	
	while(t--)
	{
		nos=0;
		scanf("%lld",&n);
		for(i=1;i<=n/2;i++)
		{
			a=i;b=n-i;
			if(a!=b)
				nos=nos+2*pairs(a*b-1);
			else if(a==b)
				nos=nos+pairs(a*b-1);				
		}
		printf("%lld\n",nos);	
	}
	return 0;
}