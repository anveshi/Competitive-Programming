#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	lol i,j,n,m;
	lol d;
	cin >> n >> m;
	lol a[n];
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sort(a,a+n);
	d=max(a[0]-0,m-a[n-1]);
	d*=2;
	for(i=0;i<n-1;i++)
	{
		d=max(d,a[i+1]-a[i]);
	}
	double z;
	z=(double)((d)/2.00000000000000);
	printf("%0.15lf\n",z);
	return 0;
}