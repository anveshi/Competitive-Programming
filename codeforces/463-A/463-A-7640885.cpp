#include<bits/stdc++.h>
using namespace std;
#define sz(a) ((a).size()) 
#define pb push_back 
#define langoor long long int
int main()
{
	int n,s,x,y,i,maxi,p;
	cin >> n >> s;
	vector <pair <int,int> > v;
	for(i=0;i<n;i++)
	{
		cin >> x >> y ;
		v.push_back( make_pair(x,y) );
	}
	sort(v.rbegin(),v.rend());
	maxi=0;
	int flag=0;
	for(i=0;i<n;i++)
	{
		//cout << v[i].first <<  " " << v[i].second << endl;
		if(v[i].first > s)
			continue;
		else if(v[i].first==s)
		{
			if(v[i].second==0)
			{
				flag=1;
			}
		}
		else
		{
			flag=1;
			p=100-v[i].second;
			if(p>maxi && p<100)
			{maxi=p;}
		}
	}
	if(flag==0) cout << -1 << endl;
	else
		cout << maxi << endl;

	return 0;
}