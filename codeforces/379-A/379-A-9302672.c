#include<stdio.h>
int a,b,i,ans;
int main()
{
	scanf("%d %d",&a,&b);
	while(i!=a)
		i++,ans++,ans%b==0?a++,ans=0:1;	
	printf("%d\n",a);
	return 0;
}