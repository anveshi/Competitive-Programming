#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
using namespace std;
int a[105];
int  main()
{
	int n,k,i,j,c1,c2;
	cin >> n >> k;
	for(i=0;i<n;i++)
		cin >> a[i];
	int ans=0;
	for(i=0;i<k;i++)
	{
		c1=0;c2=0;
		for(j=i;j<n;j+=k)
		{
			if(a[j]==1)c1++;
			else c2++;
		}
		c1=n/k-c1;c2=n/k-c2;
		ans+=min(c1,c2);
	}
	cout  << ans << endl;
	return 0;
}