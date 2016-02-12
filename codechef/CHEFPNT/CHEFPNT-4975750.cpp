#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define mp make_pair
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,m,k,i,j,x,y,temp;
	cin >> n >> m >> k;
	int v[n][m];
	for(i=0;i<n;i++)for(j=0;j<m;j++)v[i][j]=0;
	for(i=0;i<k;i++)
	{
		cin  >> x >> y;
		v[x-1][y-1]=1;
	}
	vector < pair <int,int> > v1;
	vector < pair <int,int> > v2;
	v1.clear();
	v2.clear();
	int c1=0;
	int c2=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			//cout << v[i][j] << " ";
			if(v[i][j]==0)
			{
				v1.pb(mp(i,j));
				c1++;
				while(v[i][j]==0 && j< m)j++;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(v[j][i]==0)
			{
				v2.pb(mp(j,i));
				c2++;
				while(v[j][i]==0 && j < n)
					j++;
			}
		}
	}
	if(c1<=c2)
	{
		cout << c1 << endl;
		int sz1=v1.size();
		for(i=0;i<sz1;i++)
			cout << v1[i].first+1 << " " << v1[i].second+1 <<  " 0" << endl;
	}
	else
	{
		cout << c2 << endl;
		int sz2=v2.size();
		for(i=0;i<sz2;i++)
			cout << v2[i].first+1 << " " << v2[i].second+1 <<  " 1" << endl;

	}
	return 0;
}