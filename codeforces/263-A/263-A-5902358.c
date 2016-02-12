#include<stdio.h>
#include<math.h>
int main()
{
	int a[5][5];
	int i,j,x,y,z;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==1)
			{
				x=i;y=j;
			}
		}
	}
		z=abs(x-2)+abs(y-2);
		printf("%d\n",z);
	
	return 0;
}