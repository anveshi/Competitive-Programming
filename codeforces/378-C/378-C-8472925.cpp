//anveshi 
#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
int s=0,n,m,k;
stack < pair <int,int> > S;
pair <int,int> p;
int visited[505][505]={{0}};
int a[505][505];
int coun=0;
void dfs(int xx,int yy)
{
	int x,y;
	S.push(mp(xx,yy));
	while(!S.empty())
	{
		p=S.top();
		S.pop();
		x=p.ff;y=p.ss;
		if(visited[x][y]==0)
		{
			visited[x][y]=1;
			coun++;
		if(x+1<n && a[x+1][y]==0)
			S.push(mp(x+1,y));
		if(y+1<m && a[x][y+1]==0)
			S.push(mp(x,y+1));
		if(x-1>=0 && a[x-1][y]==0)
			S.push(mp(x-1,y));
		if(y-1 >=0 && a[x][y-1]==0)
			S.push(mp(x,y-1));
		}
		if(coun==s-k)break;
	}
}
int main()
{
//	S.clear();
	int i,j,f=0,a1,a2;
	cin >> n >> m >> k;
	char str[505];
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		for(j=0;j<m;j++)
		{
			if(str[j]=='.')
			{
				a[i][j]=0;s++;
				if(f==0){
				a1=i;a2=j;f=1;}
			}
			else a[i][j]=1;
		}
	}
	if(f==1)
	{
		dfs(a1,a2);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==1)cout <<"#";
			else if(a[i][j]==0 && visited[i][j]==1)cout << "." ;
			else cout << "X";
		}
		cout << endl;
	}
	return 0;
}