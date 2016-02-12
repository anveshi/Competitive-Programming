#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k,i,j,ans;
	cin >> n >> m >> k;
	int a[n];
	ans=0;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]==1)
		{
			if(m>0)m=m-1;
			else ans++;
		}
		if(a[i]==2)
		{
			if(k>0)k=k-1;
			else if(m>0)m=m-1;
			else ans++;
		}
	}
	cout << ans << endl;
	
	return 0;
}