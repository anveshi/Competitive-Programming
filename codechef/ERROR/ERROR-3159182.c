#include<stdio.h>
#include<string.h>
int main()
{
	int T,i,flag,n;
	scanf("%d",&T);
	while(T--)
	{
		char a[100001];
		scanf("%s",a);
		flag=0;
		n=strlen(a);
		for(i=0;i<n-2;i++)
		{
			if(a[i]==a[i+2])
			{
				if(a[i]!=a[i+1])
				{
					flag++;
					break;
				}
			}
			else 
				continue;
		}
		if(flag==0)
			printf("Bad\n");
		else
			printf("Good\n");
	}
	return 0;
}