#include<bits/stdc++.h>
using namespace std;
#define lol long long int
int main()
{
	//ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int n,w,i,j;
	int d[1002],a[1002],b[1002];
	d[0]=1;a[0]=b[0]=0;
	d[1]=1,a[1]=1,b[1]=1;
	for(i=2;i<1000;i++)
	{
		b[i]=b[i-2]+d[i-1];
		a[i]=d[i-1]+a[i-1];
		d[i]=d[i-2]+2*a[i-1]+d[i-1]+b[i-1];
	}
	cin >>n;
	for(i=1;i<=n;i++)
	{
		cin >> w;
		cout << i << " " << d[w] << endl;
	}
	return 0;
}
