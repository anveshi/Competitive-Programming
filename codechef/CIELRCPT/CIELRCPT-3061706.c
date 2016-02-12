#include<stdio.h>
int a[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
int menu(int p)
{
	int i;
	if(p==0)
		return 0;
	else
	{
		for(i=11;i>=0;i--)
		{
			if(p>=a[i])
			{
			//	printf("%d??\n",p);
				return p/a[i]+menu(p%a[i]);
				break;
			}
		}
	}
}
int main()
{
	int t,p,i,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&p);
		k=menu(p);
		printf("%d\n",k);

	}

	return 0;
}