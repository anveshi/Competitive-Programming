#include<stdio.h>
#define MAX 1000001
int maximum(int x,int y)
{
	if(x>=y)
		return x;
	else 
		return y;
}
int main()
{
	int n,i,j,k,ans=MAX,result;
	scanf("%d %d",&n,&k);
	int a[n+1];
	int min[1000001];
	for(i=1;i<=1000000;i++)
		min[i]=MAX;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(min[a[i]]>i)
			min[a[i]]=i;
		if(min[a[i]]>(n-i+1))
			min[a[i]]=n-i+1;
	}
	result=MAX;
	for(i=1;i<=k/2;i++)
	{
		if(i!=k-i)
		{
			ans=maximum(min[i],min[k-i]);
			if(ans<n+2 && ans<result)
				result=ans;
		}
	}
	if(result==MAX)
		result=-1;
	printf("%d\n",result);
	return 0;
}