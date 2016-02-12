/*anveshi*/
#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define mp make_pair
#define llong long long int
#define ulong unsigned long long int
llong a[5005],b[5005];
llong dp[5005][5005];

using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	llong n,m,k,i,j;
	cin >> n >> m >> k;
	for(i=1;i<=n;i++)
	{
		cin >> a[i];
		b[i]=a[i]+b[i-1];
	}
	for(i=1;i<=k;i++)
	{
		for(j=i*m;j<=n;j++)
		{
			dp[i][j]=max(dp[i][j-1],b[j]-b[j-m]+dp[i-1][j-m]);
		}
	}
	cout << dp[k][n] << endl;
	
	return 0;
}