#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int 
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int p[321];
int a[305][305];
char s[321];
int visited[321];
vector <int> v[305];
vector <int> vv,bb;
void dfs(int ver)
{
	int i;
	stack<int> S;
	S.push(ver);
	while(!S.empty())
	{	
		int tp;
		tp=S.top();
		S.pop();
		if(visited[tp]==0)
		{
			visited[tp]=1;
			vv.pb(tp);
			bb.pb(p[tp]);
			int sz;
			sz=v[tp].size();
			for(i=0;i<sz;i++)
				S.push(v[tp][i]);
		}
	}
	sort(vv.begin(),vv.end());
	sort(bb.begin(),bb.end());
	int sz=vv.size();
	for(i=0;i<sz;i++)
	{
		p[vv[i]]=bb[i];
	}
}
int main()
{
	//ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,i,j,l;
	cin >> n;
	for(i=1;i<=n;i++)
		cin >> p[i];
	for(i=1;i<=n;i++)
	{
		scanf("%s",s);
		l=strlen(s);
		for(j=0;j<l;j++)
		{
			a[i][j+1]=s[j]-'0';
			if(s[j]=='1')v[i].pb(j+1);
		}
	}
	for(i=0;i<n+1;i++)visited[i]=0;
	for(i=1;i<=n;i++)
	{
		if(visited[i]==0)
		{
			vv.clear();bb.clear();
			dfs(i);
		}
	}
	for(i=1;i<=n;i++)cout << p[i] << " ";
	cout<< endl;
	return 0;
}