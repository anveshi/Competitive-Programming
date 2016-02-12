#include<stdio.h>
int main()
{
	int t,a,b,count;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d %d",&a,&b);
		while(1)
		{
			if(a==b){printf("%d\n",count);break;}
			else if(a>b){a=a>>1;count++;}
			else if(b>a){b=b>>1;count++;}
		}
	}
	return 0;
}