#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define mp make_pair
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,m,k,i,j,x,y,temp,H,V;
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
	vector < pair < pair <int,int> ,int > > v3;
	v1.clear();
	v2.clear();
	v3.clear();
	int c1=0;
	int c2=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
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
	int c3=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(v[i][j]==0)
			{
				c3++;
				H=1;V=1;
				k=j+1;
				while(v[i][k]==0 && k<m)
				{
					H++;k++;
				}
				k=j-1;
				while(v[i][k]==0 && k>=0)
				{
					H++;k--;
				}
				k=i+1;
				while(v[k][j]==0 && k<n)
				{
					V++;k++;
				}
				k=i-1;
				while(v[k][j]==0 && k>=0)
				{
					V++;k--;
				}
				if(V>H)
				{
					v3.pb(mp(mp(i,j),1));
					v[i][j]=1;
					k=i+1;
					while(k < n && v[k][j]==0)
					{
						v[k][j]=1;k++;
					}
					k=i-1;
					while(k >=0 && v[k][j]==0)
					{
						v[k][j]=1;k--;
					}

				}
				else
				{
					v3.pb(mp(mp(i,j),0));
					v[i][j]=1;
					k=j+1;
					while(k<m && v[i][k]==0)
					{
						v[i][k]=1;k++;
					}
					k=j-1;
					while(k>=0 && v[i][k]==0)
					{
						v[i][k]=1;k--;
					}
				}

			}
		}
	}

	if(c1<=c2 && c2 <=c3)
	{
		cout << c1 << endl;
		int sz1=v1.size();
		for(i=0;i<sz1;i++)
			cout << v1[i].first+1 << " " << v1[i].second+1 <<  " 0" << endl;
		return 0;
	}
	else if(c2 <=c3 && c2 <=c1)
	{
		cout << c2 << endl;
		int sz2=v2.size();
		for(i=0;i<sz2;i++)
			cout << v2[i].first+1 << " " << v2[i].second+1 <<  " 1" << endl;
		return 0;

	}
	else
	{
		cout << c3 << endl;
		int sz3=v3.size();
		for(i=0;i<sz3;i++)
				cout <<v3[i].first.first+1 <<  " " << v3[i].first.second+1 <<  " " << v3[i].second << endl;

	}
	return 0;
}