//anveshi
#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
	cin.tie(NULL);
	int n,m;
	int a[100005],b[100005]={0},dp[100005]={0};
	cin >> n >> m;
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=n-1;i>=0;i--)
	{
		dp[i]=dp[i+1];
		if(b[a[i]]==0)dp[i]=dp[i+1]+1;
		b[a[i]]++;
	}
	while(m--)
	{
		int a;
		cin >> a;
		cout << dp[a-1] << endl;
	}
	return 0;
}