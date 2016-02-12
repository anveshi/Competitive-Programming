#include<bits/stdc++.h>
#define lol long long int
using namespace std;
int a[1002],n;
int dp[1002][1002];

int fun(int start,int end)
{
	if(start>end)return 0;
	if(dp[start][end]!=-1)return dp[start][end];
	if(end-start<=1)return max(a[start],a[end]);
	else
	{
		int k1=a[start];
		if(a[start+1]>=a[end])k1+=fun(start+2,end);
		else k1+=fun(start+1,end-1);

		int k2=a[end];
		if(a[end-1]>a[start])
			k2+=fun(start,end-2);
		else 
			k2+=fun(start+1,end-1);
		return dp[start][end] = max(k1,k2);
	}
}

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int s=0;
	int t=0;
	while(cin>>n)
	{
		for(int i=0;i<=n+1;i++)for(int j=0;j<n+1;j++)dp[i][j]=-1;
		s=0;
		t++;
		if(!n)return 0;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			s+=a[i];
		}
		cout<<"In game "<< t <<", the greedy strategy might lose by as many as "<< 2*fun(0,n-1)-s<<  " points." << endl;
	}

	return 0;
}
