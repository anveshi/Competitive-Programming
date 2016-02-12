#include<bits/stdc++.h>
#define llong long long int 
#define ulong unsigned long long int
#define pb push_back
#define mp  make_pair
using namespace std;
int main()
{
	llong n,m,i,j,k,a,b,x,y;
	cin >> n;
	int v[n+1];
	for(i=1;i<=n;i++)
		cin >> v[i];
	int ans=0;
	v[0]=0;
	for(i=1;i<=n;i++)
	{
		ans+=fabs(v[i]-v[i-1]);
	}
	cout << ans+2*n-1 << endl;

	return 0;
}