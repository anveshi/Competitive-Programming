#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,g;
	cin >> n;
	int a[n];	
	for(i=0;i<n;i++)
		cin >> a[i];
	g=a[0];
	for(i=1;i<n;i++)
	{
		g=__gcd(g,a[i]);
	}
	cout << g*n  << endl;
	return 0;
}