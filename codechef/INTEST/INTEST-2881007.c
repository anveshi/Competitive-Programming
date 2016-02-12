#include<stdio.h>
int main()
{
	int n,k,i,count=0,num;
	scanf("%d %d",&n,&k);
//	scanf("%d",&t);
	while(n)
	{
		scanf("%d",&num);
		if(num%k==0)
			count++;
		n--;
	}
	printf("%d\n",count);
	return 0;
}