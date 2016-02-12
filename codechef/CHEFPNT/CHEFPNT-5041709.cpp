#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define algo 6
using namespace std;
int H,V,n,m,i,j,k;
int A[101][101],B[101][101];
vector < pair < pair <int,int> ,int > > v[algo];

//vector < pair < pair <int,int> ,int > > v3,v4,v5,v6;

inline void copy()
{
	for(i=0;i<n;i++)for(j=0;j<m;j++)A[i][j]=B[i][j];
}
inline void find(int right,int down)
{
				H=1;V=1;
			if(right==1)
			{				
				k=j+1;
				while(A[i][k]==0 && k<m)
				{
					H++;k++;
				}
			}
			else
			{
				k=j-1;
				while(A[i][k]==0 && k>=0)
				{
					H++;k--;
				}
				
			}
			if(down==1)
			{	
				k=i+1;	
				while(A[k][j]==0 && k<n)
				{
					V++;k++;
				}
			}
			else
			{
				k=i-1;
				while(A[k][j]==0 && k>=0)
				{
					V++;k--;
				}
			}
}
inline void update(int horizontal)
{

			if(horizontal==0)
			{
			k=i+1;
			while(k < n && A[k][j]==0)
			{
				A[k][j]=1;k++;
			}
			k=i-1;
			while(k >=0 && A[k][j]==0)
			{
				A[k][j]=1;k--;
			}
			}
			else
			{
					k=j+1;
					while(k<m && A[i][k]==0)
					{
						A[i][k]=1;k++;
					}
					k=j-1;
					while(k>=0 && A[i][k]==0)
					{
						A[i][k]=1;k--;
					}
			}				
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);int x,y,temp;
	int c[algo]={0};
	cin >> n >> m >> k;
	for(i=0;i<n;i++)for(j=0;j<m;j++){A[i][j]=0;B[i][j]=0;}
	for(i=0;i<k;i++)
	{
		cin  >> x >> y;
		A[x-1][y-1]=1;B[x-1][y-1]=1;
	}

	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(A[i][j]==0)
			{
				v[0].pb(mp(mp(i,j),0));
				c[0]++;
				while(A[i][j]==0 && j< m)j++;
			}
		}
	}
//	for(i=0;i<v[0].size();i++)
//		cout << v[0][i].first.first +1 << v[0][i].first.second +1 << v[0][i].second << endl;
//	return 0;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(A[j][i]==0)
			{
				v[1].pb(mp(mp(j,i),1));
				c[1]++;
				while(A[j][i]==0 && j < n)j++;
			}
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(A[i][j]==0)
			{
				c[2]++;
				find(1,1);
				if(V>H)
				{
				//	cout << i <<  " " << j  <<  " " << H <<  " " << V << endl;
					v[2].pb(mp(mp(i,j),1));
					A[i][j]=1;
					update(0);				
				}
				else
				{
				//	cout << i <<  " " << j  <<  " " << H <<  " " << V << endl;
					v[2].pb(mp(mp(i,j),0));
					A[i][j]=1;
					update(1);
				}

			}
		}
	}
//	cout << c[2] << endl;
//	for(i=0;i<v[2].size();i++)
//		cout << v[2][i].first.first +1  << " "<< v[2][i].first.second +1  << " "<< v[2][i].second << endl;
//	return 0;
	copy();
	for(i=n-1;i>=0;i--)
	{
		for(j=m-1;j>=0;j--)
		{
			if(A[i][j]==0)
			{
				c[3]++;
				find(0,0);
				if(V>H)
				{
					v[3].pb(mp(mp(i,j),1));
					A[i][j]=1;
					update(0);
				}
				else
				{
					v[3].pb(mp(mp(i,j),0));
					A[i][j]=1;
					k=j+1;
					update(1);
				}

			}
		}
	}
	copy();
	for(i=0;i<n;i++)
	{
		for(j=m-1;j>=0;j--)
		{
			if(A[i][j]==0)
			{
				c[4]++;
				find(0,1);
				if(V>H)
				{
					v[4].pb(mp(mp(i,j),1));
					A[i][j]=1;
					k=i+1;
					update(0);
				}
				else
				{
					v[4].pb(mp(mp(i,j),0));
					A[i][j]=1;
					update(1);
				}

			}
		}
	}
	copy();
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<m;j++)
		{
			if(A[i][j]==0)
			{
				c[5]++;
				find(1,0);
				if(V>H)
				{
					v[5].pb(mp(mp(i,j),1));
					A[i][j]=1;
					update(0);
				}
				else
				{
					v[5].pb(mp(mp(i,j),0));
					A[i][j]=1;
					update(1);
				}

			}
		}
	}


	vector <pair <int,int > >ans;
	ans.clear();
	for(i=0;i<algo;i++)
		ans.pb(mp(c[i],i));
	sort(ans.begin(),ans.end());
		cout << ans[0].first << endl;
		int index;
		index = ans[0].second;
		int sz=v[index].size();
	for(i=0;i<sz;i++)
		cout <<v[index][i].first.first+1 <<  " " << v[index][i].first.second+1 <<  " " << v[index][i].second << endl;

/*	for(j=0;j<algo;j++)
	{
		cout << c[j] << endl;
		int index =j;
		for(i=0;i<v[j].size();i++)
			cout <<v[index][i].first.first+1 <<  " " << v[index][i].first.second+1 <<  " " << v[index][i].second << endl;
		cout << "ram" << endl;
	}
*/
	return 0;
}