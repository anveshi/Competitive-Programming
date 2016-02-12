#include<bits/stdc++.h>
#define pb push_back
#define lli long long int
#define ten 1000000000
using namespace std;
int main()
{
	lli n,k,t,i,a,d,a1,d1,j,inv;
	cin >> n >> k;
	pair <lli,lli> p[n];
	lli arr[n];
	for(i=0;i<n;i++)
	{
		cin >> arr[i] ;
		if(i>0)
		{
			p[i-1].first=arr[i]-arr[i-1];
			p[i-1].second=i;
		}
	}

	sort(p,p+n-1);
	map <int,int> countd;
	for(i=0;i<n-1;i++)
		countd[p[i].first]++;

	a=ten;d=ten;
	for(i=0;i<n-1;i++)
	{
		if(countd[p[i].first] < n-2*k-1)
			continue;
		else
		{
			d1=p[i].first;
			a1=arr[p[i].second]-(p[i].first)*(p[i].second);
			inv=0;
			if(a1<a || (a1==a && d1<d))
			{
				for(j=0;j<n;j++)
				{
					if(arr[j]!=a1+j*d1)inv++;
				}
				if(inv <=k){a=a1;d=d1;}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout << a+i*d << " ";
	}
	cout << endl;

	return 0;
}