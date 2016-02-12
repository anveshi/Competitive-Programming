#include<stdio.h>
int rev(int x)
{
	int r,k;
	r=0;
	while(x)
	{	r=r*10;
		r=r+x%10;
		x=x/10;
	}
	return r;
}
int main()
{
	int n,a,b,k1,k2;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&a,&b);
		//printf("%d %d\n",k1,k2);
		k1=rev(a);
		k2=rev(b);
	//	printf("%d %d\n",k1,k2);
		printf("%d\n",rev(k1+k2));
	}
	return 0;
}
