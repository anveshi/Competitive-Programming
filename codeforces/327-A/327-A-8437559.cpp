//anveshi
#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
int a[105],dp[105];
int main()
{
	cin.tie(NULL);
	int i,n,j,ans;
	cin >> n;
	dp[0]=0;
	for(i=1;i<=n;i++)
	{
		cin >> a[i];
		if(a[i]==1)
			dp[i]=dp[i-1]+1;
		else dp[i]=dp[i-1];
	}
	ans=0;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			ans=max(ans,j-i+1+dp[n]-2*(dp[j]-dp[i-1]));
		}
	}
	cout << ans << endl;
	return 0;
}