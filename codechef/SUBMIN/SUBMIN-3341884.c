#include<stdio.h>
int main()
{
	int a[51],i,j,n;
	scanf("%d",&n);
	int min,q,k,temp;
	int res[1000001]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			temp=i;
			min=a[i];
			while(temp<=j)
			{
				if(a[temp]<min)
					min=a[temp];
				temp++;
			}
			res[min]++;
		}
	}
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d",&k);
		printf("%d\n",res[k]);
	}
return 0;
}