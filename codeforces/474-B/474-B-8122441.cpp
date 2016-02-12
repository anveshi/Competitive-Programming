#include<bits/stdc++.h>
using namespace std;
#define lol long long int
#define ulol unsigned long long int
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,m,i,p,x,j;
	vector <int>v(1000001);
	p=1;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> x;
		for(j=p;j<p+x;j++)v[j]=i;
		p+=x;
	}
	cin >> m;
	for(i=0;i<m;i++)
	{
		cin >> x;
		cout << v[x] << endl;
	}

	return 0;
}