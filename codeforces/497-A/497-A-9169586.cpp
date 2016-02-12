#include<bits/stdc++.h>
#define lol long long int
#define pb push_back
#define ss second
#define ff first
using namespace std;
int a[111][111];
char s[111];
int main()
{
	cin.tie(NULL);
	int n,m,j,i,flag,cnt;
	cin >> n >> m;
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		for(j=0;j<m;j++)
		{
			a[i][j]=s[j]-'a';
		}
	}
	cnt=0;
	set <int> s;
	s.clear();
	for(i=1;i<n;i++)s.insert(i);
	for(j=0;j<m;j++)
	{
		vector <int> v;
		v.clear();
		if(s.empty())break;
		flag=1;
		for(set<int>::iterator it=s.begin();it!=s.end();it++)
		{
			i=*it;
			if(a[i][j]>a[i-1][j])v.pb(i);
			else if(a[i][j]==a[i-1][j])continue;
			else {flag=0;break;}
		}
		if(flag==1)
		{
			int sz=v.size();
			for(i=0;i<sz;i++)
					s.erase(v[i]);
		}
		if(flag==0)cnt++;
	}
	cout <<cnt << endl;
	return 0;
}