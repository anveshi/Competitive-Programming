#include<bits/stdc++.h>
#define lol long long int
using namespace std;

int main()
{
	
	cin.tie(NULL);
	lol n,t,i;
	cin>>n>>t;
	lol a[n+1];
	map <lol,lol> M,M1;
	for(i=1;i<n;i++)
	{
		cin >> a[i];
		a[i]+=i;
	}
	i=1;
	while(i<=n)
		M[i]=1,i=a[i];
	M[t]==0?cout<<"NO" << endl:cout<<"YES" << endl;
	return 0;
}