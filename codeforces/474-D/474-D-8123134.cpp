#include<bits/stdc++.h>
using namespace std;
#define lol long long int
#define ulol unsigned long long int
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define mod 1000000007
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	lol i,j,t,k,n,ans,x,y;
	cin >> n >> k;
	vector <lol> v(100001); 
	vector <lol> sum(100001);
	sum[0]=0;
	for(i=0;i<100001;i++)
	{
		if(i<k)
			v[i]=1;
		else
		{
			v[i]=v[i-1]+v[i-k];
			if(v[i]>mod)
				v[i]%=mod;
		}
		if(i>0)
			sum[i]=sum[i-1]+v[i];
	}
	v[0]=0;
	for(i=0;i<n;i++)
	{
		cin >> x >> y;
		ans = sum[y]-sum[x-1];
		if(ans < 0)ans+=mod;
		cout << ans%mod << endl;

	}
	return 0;
}