#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	char s1[25],s2[25];
	scanf("%s %s",s1,s2);
	int n,i,j,t,m;
	char c1,c2;
	map < pair<char,int>,int> mpi;
	map < pair<char,int>,int >mop;
	cin >> n;
	vector < pair < pair<int,char> ,pair<int,char> > > v;
	v.clear();
	for(i=0;i<n;i++){
		cin >> t >> c1 >> m >> c2;
		v.pb(mp(mp(t,c1),mp(m,c2)));
	}
	sort(v.begin(),v.end());
	for(i=0;i<n;i++)
	{
		t=v[i].ff.ff;
		c1=v[i].ff.ss;
		m=v[i].ss.ff;
		c2=v[i].ss.ss;

		if(mop[mp(c1,m)])continue;
		if(c2=='r')
		{
			mop[mp(c1,m)]=1;
			if(c1=='h')cout << s1 << " ";
			else cout << s2 << " ";
			cout << m << " " << t  << endl;
		}
		else if(c2=='y')
		{

			if(mpi[mp(c1,m)])
			{
				mop[mp(c1,m)]=1;
				if(c1=='h')cout << s1 << " ";
				else cout << s2 << " ";
				cout << m  <<  " " << t  << endl;
			}
			else 
			{
				mpi[mp(c1,m)]=1;
			}
		}
	}
	return 0;
}