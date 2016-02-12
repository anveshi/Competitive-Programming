//anveshi
#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
	cin.tie(NULL);
	int n,m,i,j;
	string str;
	cin >> str ;
	n=str.length();
	int dp[n+5];
	dp[0]=0;
	for(i=1;i<n;i++)
	{
		dp[i]=dp[i-1];
		if(str[i]==str[i-1])
			dp[i]+=1;
	}
	cin >> m;
	while(m--)
	{
		int a,b;
		cin >>  a >> b;
		cout << dp[b-1] - dp[a-1] << endl;
	}
	return 0;
}