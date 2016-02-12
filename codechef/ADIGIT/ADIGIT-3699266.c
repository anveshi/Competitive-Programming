#include<stdio.h>
#include<string.h>
int modulus(int a,int b)
{
	if(a>=b)
		return (a-b);
	else return (b-a);
}
int main()
{
	int n,m,i,j,index,x;
	scanf("%d %d",&n,&m);
	char s[100001];
	if(n>0)
	scanf("%s",s);
	int a[100001],ans[100001];
	int f[10]={0};
	for(i=1;i<=n;i++)
	{

		a[i]=s[i-1]-'0';
		x=0;
		for(j=0;j<10;j++)
		{
			x=x+f[j]*modulus(j,a[i]);
		}
		ans[i]=x;
		f[a[i]]++;
	}
	for(i=1;i<=m;i++)
	{
		scanf("%d",&index);
		if(index==0)
			printf("0\n");
		else
			printf("%d\n",ans[index]);
	}
	return 0;	
}