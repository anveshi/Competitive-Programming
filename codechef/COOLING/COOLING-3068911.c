#include<stdio.h>
int main()
{
	int t,n,i,j,temp,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n],b[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				if(b[i]>b[j])
				{
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
		}
		count=0;j=0;
		for(i=0;i<n;i++)
		{
			if(b[i]>=a[j])
			{
				count++;j++;
			}
			else
				continue;
		}
		printf("%d\n",count);

	}
	return 0;
}