#include<bits/stdc++.h>
#define lol long long int 
using namespace std;
int main()
{
	cin.tie(NULL);
	lol n,i,j,c=0;
	cin >> n;
	pair <lol,lol> a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i].first;
		a[i].second=i;
	}
	sort(a,a+n);
	lol ans[n];
	for(i=0;i<n;i++)
	{
		if(a[i].first > c)
			ans[a[i].second]=a[i].first,c=a[i].first;
		
		else
			ans[a[i].second]=++c;
	}

	for(i=0;i<n;i++)
		cout<< ans[i] << " ";
	cout << endl;
	return 0;
}