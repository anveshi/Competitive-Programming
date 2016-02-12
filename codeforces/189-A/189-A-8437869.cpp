//anveshi
#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
int dp[4005];
int fun(int k)
{
	if(k==0)return 0;
	else if(k<0)return -100000000;
	else return dp[k];
}
int main()
{
	cin.tie(NULL);
	int n,a[3],i;
	cin >> n >> a[0] >> a[1] >> a[2];
	sort(a,a+3);
	dp[0]=0;
	for(i=1;i<=n;i++)
	{
		dp[i]=max(max(fun(i-a[0]),fun(i-a[1])),fun(i-a[2]))+1;
	}
	cout << dp[n] << endl;
	return 0;
}