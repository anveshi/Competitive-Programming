#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); 	cin.tie(NULL);
	int T,r,g,b,k,ans,i,x;
	vector <int> m;
	cin >> T;
	while(T--)
	{
		m.clear();
		cin >> r >> g >> b >> k;
		for(i=0;i<r;i++)
		{
			cin >> x;
			if(i==0)m.pb(x);
			else m[0]=max(m[0],x);
		}
		for(i=0;i<g;i++)
		{
			cin >> x;
			if(i==0)m.pb(x);
			else m[1]=max(m[1],x);
		}
		for(i=0;i<b;i++)
		{
			cin >> x;
			if(i==0)m.pb(x);
			else m[2]=max(m[2],x);
		}
		assert(m.size()==3);
		sort(m.begin(),m.end());
		ans=m[2];
		for(i=0;i<k;i++)
		{
			m[2]/=2;
			sort(m.begin(),m.end());
			ans=min(ans,m[2]);
		}
		cout << ans << endl;
	}
	return 0;
}