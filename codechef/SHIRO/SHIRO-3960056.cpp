#include<bits/stdc++.h>
using namespace std;
int half(int x)
{
	return (x%2==0?x/2:x/2+1);
}
int main()
{
	int T,j,n,i,b;
	cin >> T;
	while(T--)
	{
		cin >> n;
		int a[n+1];
		float p[n+1];
		int  f;
		f=0;
		for(i=1;i<=n;i++)
		{
			cin >> a[i];
			f+=a[i];
		}
		for(i=1;i<=n;i++)
		{
			cin >> p[i];
			p[i]=p[i]/100.000;
		}
		float dp[i+1][f+1];
		dp[0][0]=1.0;
		for(j=1;j<=f;j++)
		{
			dp[0][j]=0.0;
		}
		for(j=1;j<=n;j++)
			dp[j][0]=dp[j-1][0] * (1- p[j]);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=f;j++)
			{
				if((j-a[i]) >=0)
				{
					dp[i][j]=((dp[i-1][j-a[i]]) * p[i] +
						(dp[i-1][j])*(1.0 - p[i]));
				}
				else
				{
					dp[i][j]=(dp[i-1][j]) * (1.0 -  p[i]);
				}
			}
		}
		float sum =0;
		b=half(f);
		for(i=b;i<=f;i++)
		{
			sum +=dp[n][i];
		}
		printf("%0.7f\n",sum);
/*		for(i=0;i<=n;i++)
		{
			for(j=0;j<=f;j++)
				printf("%f    ",dp[i][j]);
			printf("\n");
		}
		printf("\n");
*/
	}	

	return 0;
}