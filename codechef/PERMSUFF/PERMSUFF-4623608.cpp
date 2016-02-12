#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
int main()
{
	int T,i,j;
	cin >> T;
	while(T--)
	{

		int n,m,x,y;
		cin >> n >> m;
		vector< pair<int,int> > v; 
		vector <pair <int,int> > fv;
		v.clear();
		fv.clear();
		int a[n+1];
		for(i=1;i<=n;i++)
			cin >> a[i];
		for(i=0;i<m;i++)
		{
			cin >> x >> y;
			v.pb(mp(x,y));
		}
		sort(v.begin(),v.end());
/*		for(i=0;i<m;i++)
			cout << v[i].first << "     " << v[i].second << endl;*/
		fv.pb(v[0]);
		int u=0;
		for(i=1;i<m;i++)
		{
			if(v[i].first <= fv[u].second){
				if(fv[u].second < v[i].second)
				fv[u].second=v[i].second;}
			else
			{
				fv.pb(v[i]);
				u++;
			}
		}
//		cout << u << endl;
/*		for(i=0;i<=u;i++)
		{
			cout << fv[i].first << " " << fv[i].second << endl;
		}*/
//		int flag = 1;
		int l[n+1],r[n+1];
		for(i=1;i<=n;i++)
		{
			l[i]=i;r[i]=i;
		}
		for(i=0;i<=u;i++)
		{
			for(j=fv[i].first;j<=fv[i].second;j++)
			{
				l[j]=fv[i].first;	
				r[j]=fv[i].second;
			}
		}
	/*	for(i=1;i<=n;i++)
		{
			cout << l[i] <<    "      " << r[i] << endl;
		}*/
		int flag=1;
		for(i=1;i<=n;i++)
		{
			if(a[i]>=l[i] && a[i]<=r[i])
				continue;
			else {flag=0;break;}
		}
		if(flag==1)
			cout << "Possible" << endl;
		else
			cout << "Impossible" << endl;
	}
	return 0;
}