#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int 
#define mp make_pair
#define pb push_back
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	lol n,d,i,j,a,b,x,y;
	vector < pair <lol,lol> > v;
	vector <lol> vv;
	v.clear();
	cin>>n>>d>>a>>b;
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		v.pb(mp(x*a+y*b,i+1));
	}
	sort(v.begin(),v.end());
	for(i=0;i<n;i++)
	{
		d=d-v[i].first;
		if(d>=0)vv.pb(v[i].second);
		else break;
	}
	cout << i << endl;
	lol sz=vv.size();
	for(i=0;i<sz;i++)cout<< vv[i] << " ";
	if(sz)cout << endl;
	return 0;
}