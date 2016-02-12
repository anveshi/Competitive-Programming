#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define mp make_pair
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);int n,m,k,i,j,x,y,temp,H,V,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
	cin >> n >> m >> k;
	int v[n][m];int B[n][m];int C[n][m];int D[n][m];
	for(i=0;i<n;i++)for(j=0;j<m;j++){v[i][j]=0;B[i][j]=0; C[i][j]=0;D[i][j]=0;}
	for(i=0;i<k;i++)
	{
		cin  >> x >> y;
		v[x-1][y-1]=1;B[x-1][y-1]=1;C[x-1][y-1]=1;D[x-1][y-1]=1;
	}
	vector < pair <int,int> > v1,v2;
	vector < pair < pair <int,int> ,int > > v3,v4,v5,v6;
	v1.clear();v2.clear();v3.clear();v4.clear();v5.clear();v6.clear();
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
	for(i=n-1;i>=0;i--)
	{
		for(j=m-1;j>=0;j--)
		{
			if(B[i][j]==0)
			{
				c4++;
				H=1;V=1;
				k=j+1;
				while(B[i][k]==0 && k<m)
				{
					H++;k++;
				}
				k=j-1;
				while(B[i][k]==0 && k>=0)
				{
					H++;k--;
				}
				k=i+1;
				while(B[k][j]==0 && k<n)
				{
					V++;k++;
				}
				k=i-1;
				while(B[k][j]==0 && k>=0)
				{
					V++;k--;
				}
				if(V>H)
				{
					v4.pb(mp(mp(i,j),1));
					B[i][j]=1;
					k=i+1;
					while(k < n && B[k][j]==0)
					{
						B[k][j]=1;k++;
					}
					k=i-1;
					while(k >=0 && B[k][j]==0)
					{
						B[k][j]=1;k--;
					}

				}
				else
				{
					v4.pb(mp(mp(i,j),0));
					B[i][j]=1;
					k=j+1;
					while(k<m && B[i][k]==0)
					{
						B[i][k]=1;k++;
					}
					k=j-1;
					while(k>=0 && B[i][k]==0)
					{
						B[i][k]=1;k--;
					}
				}

			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=m-1;j>=0;j--)
		{
			if(C[i][j]==0)
			{
				c5++;
				H=1;V=1;
				k=j+1;
				while(C[i][k]==0 && k<m)
				{
					H++;k++;
				}
				k=j-1;
				while(C[i][k]==0 && k>=0)
				{
					H++;k--;
				}
				k=i+1;
				while(C[k][j]==0 && k<n)
				{
					V++;k++;
				}
				k=i-1;
				while(C[k][j]==0 && k>=0)
				{
					V++;k--;
				}
				if(V>H)
				{
					v5.pb(mp(mp(i,j),1));
					C[i][j]=1;
					k=i+1;
					while(k < n && C[k][j]==0)
					{
						C[k][j]=1;k++;
					}
					k=i-1;
					while(k >=0 && C[k][j]==0)
					{
						C[k][j]=1;k--;
					}

				}
				else
				{
					v5.pb(mp(mp(i,j),0));
					C[i][j]=1;
					k=j+1;
					while(k<m && C[i][k]==0)
					{
						C[i][k]=1;k++;
					}
					k=j-1;
					while(k>=0 && C[i][k]==0)
					{
						C[i][k]=1;k--;
					}
				}

			}
		}
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<m;j++)
		{
			if(D[i][j]==0)
			{
				c6++;
				H=1;V=1;
				k=j+1;
				while(D[i][k]==0 && k<m)
				{
					H++;k++;
				}
				k=j-1;
				while(D[i][k]==0 && k>=0)
				{
					H++;k--;
				}
				k=i+1;
				while(D[k][j]==0 && k<n)
				{
					V++;k++;
				}
				k=i-1;
				while(D[k][j]==0 && k>=0)
				{
					V++;k--;
				}
				if(V>H)
				{
					v6.pb(mp(mp(i,j),1));
					D[i][j]=1;
					k=i+1;
					while(k < n && D[k][j]==0)
					{
						D[k][j]=1;k++;
					}
					k=i-1;
					while(k >=0 && D[k][j]==0)
					{
						D[k][j]=1;k--;
					}

				}
				else
				{
					v6.pb(mp(mp(i,j),0));
					D[i][j]=1;
					k=j+1;
					while(k<m && D[i][k]==0)
					{
						D[i][k]=1;k++;
					}
					k=j-1;
					while(k>=0 && D[i][k]==0)
					{
						D[i][k]=1;k--;
					}
				}

			}
		}
	}
	if(c1<=c2 && c1 <=c3 && c1<=c4 && c1<=c5 && c1 <=c6)
	{
		cout << c1 << endl;
		int sz1=v1.size();
		for(i=0;i<sz1;i++)
			cout << v1[i].first+1 << " " << v1[i].second+1 <<  " 0" << endl;
		return 0;
	}
	else if(c2 <=c3 && c2 <=c1 && c2 <=c4 && c2<=c5 && c2 <=c6)
	{
		cout << c2 << endl;
		int sz2=v2.size();
		for(i=0;i<sz2;i++)
			cout << v2[i].first+1 << " " << v2[i].second+1 <<  " 1" << endl;
		return 0;

	}
	else if(c3 <=c1 && c3 <=c2 && c3 <=c4 && c3 <=c5 && c3<=c6)
	{
		cout << c3 << endl;
		int sz3=v3.size();
		for(i=0;i<sz3;i++)
				cout <<v3[i].first.first+1 <<  " " << v3[i].first.second+1 <<  " " << v3[i].second << endl;
		return 0;
	}
	else if(c4 <=c1 && c4 <=c2 && c4 <=c5 && c4<=c6 && c4<=c3)
	{
		cout << c4 << endl;
		int sz4=v4.size();
		for(i=0;i<sz4;i++)
				cout <<v4[i].first.first+1 <<  " " << v4[i].first.second+1 <<  " " << v4[i].second << endl;
		return 0;
	}
	else if(c5 <=c1 && c5 <=c2 && c5 <=c4 && c5<=c6 && c5<=c3)
	{
		cout << c5 << endl;
		int sz5=v5.size();
		for(i=0;i<sz5;i++)
				cout <<v5[i].first.first+1 <<  " " << v5[i].first.second+1 <<  " " << v5[i].second << endl;
		return 0;
	}
	else if(c6 <=c1 && c6 <=c2 && c6 <=c3 && c6<=c4 && c6<=c5)
	{
		cout << c6 << endl;
		int sz6=v6.size();
		for(i=0;i<sz6;i++)
				cout <<v6[i].first.first+1 <<  " " << v6[i].first.second+1 <<  " " << v6[i].second << endl;
		return 0;
	}
	return 0;
}