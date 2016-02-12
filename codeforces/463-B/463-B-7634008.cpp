#include<bits/stdc++.h>
using namespace std;
#define sz(a) ((a).size()) 
#define pb push_back 
#define langoor long long int
int main()
{
	langoor n,i,j,en,ans,z;
	cin >> n;
	vector < langoor > v(n+1,0);
	for(i=1;i<=n;i++)
		cin >> v[i];
	ans=v[1];
	v[0]=ans;
	en=0;
	for(i=1;i<n;i++)
	{
		z=v[i]-v[i+1];
		if(z>=0){en+=z;continue;}
		else
		{
			z=-1*z;
			if(en>=z)
			{
				en-=z;
				continue;
			}
			else
			{
				ans+=z-en;
				en=0;
			}
		}

	}
	cout << ans << endl;

	return 0;
}