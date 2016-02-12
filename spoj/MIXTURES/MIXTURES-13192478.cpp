#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int a[105];
int ccsum[105][105];
int dp[105][105];
int best(int start,int end)
{
	int zz;
	if(start==end)return 0;
	else if(dp[start][end]!=-1)return dp[start][end];
	else 
	{
		int minimum=numeric_limits<int>::max();
		for(int i=start;i<end;i++){
			zz = best(start,i)+best(i+1,end)+((ccsum[start][i])*ccsum[i+1][end]);
			if(zz<minimum)minimum=zz;
		}
		return dp[start][end]=minimum;
	}
}
int main()
{
	int t,n,i,j,s;
	while(scanf("%d",&n)==1)
	{
		s=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			ccsum[i][i]=a[i];
			for(j=0;j<n;j++)
				dp[i][j]=-1;
		}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++)
			{
				ccsum[i][j]=(ccsum[i][j-1]+a[j])%100;
			}
		}
		cout<< best(0,n-1) << endl;
	}

	return 0;
}
