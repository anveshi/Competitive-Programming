/* Algorithm source :: http://en.wikipedia.org/wiki/Stable_marriage_problem */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,i,j,n,x,count;
	cin >> T;
	while(T--)
	{
		count = 0;
		cin >> n;
		int w[n+1][n+1],men[n+1],women[n+1];
		int m[n+1][n+1];
		int preferw[n+1][n+1];
	//	int preferm[n+1][n+1];
		for(i=1;i<=n;i++)
			for(j=0;j<=n;j++)
			{
				cin >> w[i][j];
				if(j!=0)
					preferw[i][w[i][j]]=j;
			}
		for(i=1;i<=n;i++)
			for(j=0;j<=n;j++)
			{
				cin >> m[i][j];
			//	if(j!=0)
			//		preferm[i][m[i][j]]=j;

			}
		for(i=0;i<=n;i++)
		{
			men[i]=0,women[i]=0;
		}
		while(count!=n)
		{
		for(i=1;i<=n;i++)
		{
			j=1;
			while(men[i]==0)
			{
				if(women[m[i][j]]==0)
				{
					men[i]=m[i][j];
					count++;
					women[m[i][j]]=i;
				}
				else
				{
					x=women[m[i][j]];
					if(preferw[m[i][j]][x]>preferw[m[i][j]][i])
					{
						men[i]=m[i][j];
						women[m[i][j]]=i;
						men[x]=0;
					}
				}
				j++;

			}
		}
		if(count==n)break;
		}
		for(i=1;i<=n;i++)
		{
			cout << i << " " << men[i] << endl;
		}


	}
	return 0;
}