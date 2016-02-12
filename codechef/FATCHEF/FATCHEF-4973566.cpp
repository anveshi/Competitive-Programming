#include<bits/stdc++.h>
using namespace std;
#define mod 1000000009
#define ram ios_base::sync_with_stdio(false); cin.tie(NULL);
#define lol long long int
typedef pair <lol,lol>  pii;
typedef vector < pii > vpii;   
typedef vector <lol> vi;
int main()
{
	ram;
	lol t,i,j,m,n,x,y,sz,sz1,ans,temp;
	char c;
	vpii v;
	cin >> t;
	while(t--)
	{
		v.clear();
		cin  >> n >> m;
		for(i=0;i<m;i++)
		{
			cin >> c >> x; 
			y=(lol) (c-'A');
			v.push_back(make_pair(x,y));
		}
		sort(v.begin(),v.end());
		sz = v.size();
		ans=1;
		for(i=1;i<sz;i++)
		{
			if(v[i].second!=v[i-1].second)
				ans=ans*(v[i].first - v[i-1].first);
			if(ans > mod)
				ans%=mod;			
		}
		cout << ans << endl;
	}
	return 0;
}