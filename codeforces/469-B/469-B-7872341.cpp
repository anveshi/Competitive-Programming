#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define llong long long int
#define ulong unsigned long long int
using namespace std;
int a[1005];
int b[1005];
int main()
{
	llong p,q,l,r,i,j,k,x,y;
	cin >> p >> q >> l >> r;
	vector <int> a(1005,0);
	vector <int> b(1005,0);
	for(i=0;i<p;i++)
	{
		cin >> x >> y;
		for(j=x;j<=y;j++)
			a[j]=1;
	}
	for(i=0;i<q;i++)
	{
		cin >> x >> y;
		for(j=x;j<=y;j++)
			b[j]=1;
	}
	int sz;
	vector <int>  v;
	v.clear();
	for(i=0;i<=1000;i++)
	{
		if(b[i]==1)
			v.pb(i);
	}
	sz=v.size();
	int count=0;
	int f;
	for(i=l;i<=r;i++)
	{
		f=0;
		for(j=0;j<sz;j++)
		{
			if(v[j]+i <=1000)
			{
				if(a[v[j]+i]==1)
				{
					f=1;
					break;
				}
			}
		}
		if(f==1)count++;
	}
	cout << count << endl;
	return 0;
}