#include <bits/stdc++.h>
#define lol long long int 
#define ulol unsigned long long int
#define mp make_pair
#define pb push_back
using namespace std;

int main() { 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,i,j,x,flag,a1,a2;
	cin >> n;
	vector < pair <int,int> > v;
	for(i=1;i<=n;i++)
	{
		cin >> x;
		v.pb(mp(x,i));
	}
	sort(v.begin(),v.end());
/*	for(i=0;i<n;i++)
	{
		cout << v[i].first << " " << v[i].second << endl;
	}*/
	int dp[n+1];
	dp[0]=1;
	for(i=1;i<n;i++)
	{
		if(v[i].first == v[i-1].first)
			dp[i]=dp[i-1]+1;
		else 
			dp[i]=1;
	}
	flag=0;
	for(i=0;i<n;i++)
	{
		if(dp[i] >=3)
		{
			flag=i;
			break;
		}
	}
	if(flag>0)
	{
		cout << "YES" << endl;
		for(i=0;i<n;i++)cout << v[i].second << " ";cout << endl;
		i=flag;
		swap(v[i-2].second,v[i].second);
		for(i=0;i<n;i++)cout << v[i].second << " ";cout << endl;
		i=flag;
		swap(v[i-1].second,v[i].second);
		for(i=0;i<n;i++)cout << v[i].second << " ";cout << endl;
	}
	else
	{
		flag=0;
		for(i=0;i<n;i++)
		{
			if(dp[i]==2 && flag==0)
			{
				a1=i;flag=1;
				continue;
			}
			if(dp[i]==2 && flag==1)
			{
				a2=i;flag=2;
			}
			if(flag==2)break;
		}
		if(flag==2)
		{
			cout << "YES" << endl;
			for(i=0;i<n;i++)cout << v[i].second << " ";cout << endl;
			swap(v[a1-1].second,v[a1].second);
			for(i=0;i<n;i++)cout << v[i].second << " ";cout << endl;
			swap(v[a2-1].second,v[a2].second);
			swap(v[a1-1].second,v[a1].second);
			for(i=0;i<n;i++)cout << v[i].second << " ";cout << endl;

		}
		else
		{
			cout << "NO" << endl;
		}

	}
	return 0;
}