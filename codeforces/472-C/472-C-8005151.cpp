#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 

using namespace std;
int main()
{
	cin.tie(NULL);
	lol x,y,n,m,i,k,j;
	char s[55];

	vector < pair< string,int > > v;
	cin >> n;
	int p[n];
	for(i=0;i<2*n;i++)
	{
		scanf("%s",s);
		v.pb(mp(s,(i/2)+1));
	}
	for(i=0;i<n;i++)
		cin >> p[i];
	sort(v.begin(),v.end());
	k=0;
	int flag;
	flag=0;
	for(i=0;i<2*n;i++)
	{
		if(v[i].second == p[k])
			k++;
		if(k==n)
		{
			flag=1;break;
		}
	}
	if(flag==1)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;


	return 0;
}