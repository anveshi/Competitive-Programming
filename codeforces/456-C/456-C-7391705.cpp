#include<bits/stdc++.h>
using namespace std;
long long int county[100001];
long long int dp[100001];
long long int man(long long int a,long long int b)
{
	return (a>=b?a:b);
}
int m,n,p;
long long int fun(int i)
{
	if(dp[i]!=-1)return dp[i];
	if(m==i){dp[i]=county[m];return dp[i];}
	else if(m-i==1){dp[i]=man(county[m],county[m-1]);return dp[i];}
	dp[i]=man(fun(i+1),county[i]+fun(i+2));
	return dp[i];
}

int main()
{
	scanf("%d",&n);
	m=0;
	int i;
	for(i=0;i<100001;i++)dp[i]=-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
		if(p>m)m=p;
		county[p]+=p;
	}
	cout << fun(0) << endl;
	return 0;
}