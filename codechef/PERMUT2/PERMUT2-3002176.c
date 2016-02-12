#include<stdio.h>
int main()
{
	int n,t,i,j,flag=0,k;
	int a[100001];
	while((scanf("%d",&n)))
	{
		if(n!=0)
		{
		flag=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			if(a[a[i]-1]==i+1)
			{	flag++;
				continue;
			}
			else break;
		}
		if(flag==n)
			printf("ambiguous\n");
		else
			printf("not ambiguous\n");
		}
		else
			break;
	}

	return 0;
}