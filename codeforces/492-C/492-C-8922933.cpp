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
	lol n,r,avg,i,j,y,x,s,req,ans;
	cin >> n >> r >> avg;
	vector < pair<lol,lol> > v;
	v.clear();
	s=0;
	for(i=0;i<n;i++)
	{
		cin >> x >> y;
		s+=x;
		v.pb(mp(y,r-x));
	}
	sort(v.begin(),v.end());
	ans=0;
	req=(n*avg)-s;
	i=0;
	while(req>0)
	{
		if((v[i].ss)<req)
		{
			ans+=(v[i].ff)*(v[i].ss);
			req-=v[i].ss;
			i++;
		}
		else//req <=v[i].ss
		{
			ans+=(v[i].ff)*req;
			req=0;
		}
	}
	cout << ans << endl;
	return 0;
}