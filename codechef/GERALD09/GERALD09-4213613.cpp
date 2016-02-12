#include<bits/stdc++.h>
using namespace std;
int ans[15][15]={{0}};
int main()
{
	int T,n,m,k,y,xx;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d %d",&n,&m,&k);
		int a=n*m;
		int b=a*a;
		y=1;
		
	//	if(k > a && k <(2*a+b)/3)y=2;
	//	else if(k >=(2*a+b)/3 && k < (2*b+a)/3)y=3;
	//	else if(k>=(2*b+a)/3 && k <=b)y=4;
		if(k>a && k<=a+5*(b-a)/23)y=2;
		else if(k>a+5*(b-a)/23 && k <=a+12*(b-a)/23)y=3;
		else if(k>a+12*(b-a)/23 &&  k <=b)y=4;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					xx=rand();
					ans[i][j]=(xx%y);
				}
			}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(ans[i][j]==0)
					printf("A");
				else if(ans[i][j]==1)
					printf("G");
				else if(ans[i][j]==2)
					printf("C");
				else if(ans[i][j]==3)
					printf("T");
			}
			printf("\n");
		}
	}

	return 0;
}