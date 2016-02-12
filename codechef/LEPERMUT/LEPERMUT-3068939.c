#include<stdio.h>
int local_inversion(int a[],int n)
{
	int i,count=0;
	for(i=0;i<n-1;i++)
	{	if(a[i]>a[i+1])
		count++;
	}
	return count;
}
int inversion(int a[],int n)
{
	int i,j,count=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
				count++;
		}
	}
	return count;

}
int main()
{
	int t,n,i,in,lo_in;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		in=inversion(a, n);
		lo_in=local_inversion(a,n);
		if(in==lo_in)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}