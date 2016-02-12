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
	lol n,m,i,j,x,sz,c1,c2;
	vector < pair < pair<lol,lol>,pair<lol,lol> > > v;
	cin >> n ;
	for(i=0;i<n;i++)
	{
		cin >> x;
		v.pb(mp(mp(x,1),mp(0,0)));
	}
	cin  >> m;
	for(i=0;i<m;i++)
	{
		cin >> x;
		v.pb(mp(mp(x,2),mp(0,0)));
	}
	sort(v.begin(),v.end());
	sz=v.size();c1=0;c2=0;
	for(i=0;i<sz;i++)
	{
		if((v[i].ff).ss==1)
		{
			(v[i].ss).ff=++c1;
			(v[i].ss).ss=c2;
		}
		else 
		{
			(v[i].ss).ss=++c2;;
			(v[i].ss).ff=c1;
		}
	}
/*	cout << sz << endl;
	for(i=0;i<sz;i++)
	{
		cout << v[i].ff.ff << " " << v[i].ff.ss <<  " "  << v[i].ss.ff <<  " " << v[i].ss.ss << endl;
	}
	return 0;
*/	lol k1,k2,z2,z1,a1,a2,mini;
	mini = (-1)*10000000000000000;
	for(i=0;i<sz;i++)
	{
		k1=(v[i].ss).ff;
		k2=(v[i].ss).ss;
		z1=k1*2+(n-k1)*3;
		z2=k2*2+(m-k2)*3;
		if(mini<z1-z2 || (mini==z1-z2 && z1>a1))
		{
	//		aa=(v[i].ff).ff;
	//		bb=(v[i].ss).ff;
	//		cc=(v[i].ss).ss;
			a1=z1;a2=z2;
			mini=z1-z2;
		}
	}
	if(3*(n-m)>mini || (3*(n-m)==mini && 3*n>a1))
	{
		a1=3*n;a2=3*m;
	}
	if(2*(n-m)>mini || (2*(n-m)==mini && 2*n>a1))
	{
		a1=2*n;a2=2*m;
	}

	cout << a1 << ":" << a2 << endl;
	//cout << aa << " " << bb << " " << cc << endl;
	return 0;
}