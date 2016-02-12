#include<bits/stdc++.h>
#include<limits>
#define limit 100000000000000
#define min_double numeric_limits< long double>::min()
#define max_double numeric_limits<long  double>::max()
using namespace std;
int main()
{
	int T,n,c,k,i,x,y,j,p;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d %d",&n,&c,&k);
		int f[n+1];
		for(i=1;i<=n;i++)f[i]=0;
		for(i=0;i<k;i++)
		{
			scanf("%d %d",&x,&y);
			for(j=x;j<=y;j++)
			{
				f[j]++;
			}
		}
		long double dp[k+1][c];
		for(i=0;i<=k;i++)for(j=0;j<c;j++)dp[i][j]=0.0000000;dp[0][1]=1.00/(long double )limit;
		for(i=1;i<=k;i++)
		{
			for(j=0;j<c;j++)
			{
				for(p=0;p<c;p++)
				{
						dp[i][j]+=dp[i-1][j];
						dp[i][(j*p)%c]+=dp[i-1][j];
				}
			}
		}
		long double ans=0.0;
		for(i=1;i<=n;i++)
		{
			long  double sum=0.0,count=0.0;
			for(j=0;j<c;j++)
			{
				sum=sum+j*dp[f[i]][j];count=count+dp[f[i]][j];
			}
			ans+=sum/count;
		}
		printf("%0.9LF\n",ans);
	}
	return 0;
}