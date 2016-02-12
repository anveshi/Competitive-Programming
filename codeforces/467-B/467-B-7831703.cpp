/*anveshi*/
#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define mp make_pair
#define llong long long int
#define ulong unsigned long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int n,m,k,i,ans,count,j;
	cin >> n >> m >> k;
	int x[m+1];
	for(i=0;i<=m;i++)
		cin >> x[i];
	for(i=0;i<m;i++)
		x[i]=x[i]^x[m];
	ans=0;
	for(i=0;i<m;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(x[i]	& 1<<j)
				count++;

		}
		if(count <= k)
			ans++;
	}
	cout << ans << endl;
	
	return 0;
}