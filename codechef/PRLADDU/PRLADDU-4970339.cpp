#include<bits/stdc++.h>
#define pb push_back 
#define mp make_pair
#define lol long long int
using namespace std;
typedef pair <lol,lol>  pii;
typedef vector < pii > vpii;
inline lol abso(lol a)
{
	return (a >=0 ? a:-a);
}
int main()
{
	lol n,i,t,k,sz1,sz2,ans,temp,x;
	vpii v1,v2;
	cin.tie(NULL);
	cin >> t;
	while(t--)
	{
		v1.clear();v2.clear();
		cin >> n;
		for(i=0;i<n;i++)
		{
			cin >> x;
			if(x >= 0)v1.pb(mp(x,i));
			else v2.pb(mp(-x,i));
		}
		sz2=v2.size();sz1=v1.size();
		k=0;
		ans=0;
		for(i=0;i<sz2;i++)
		{
			temp=v2[i].first;
			while(temp > 0)
			{
				if(temp <= v1[k].first)
				{
					ans= ans + (temp*(abso(v2[i].second - v1[k].second)));
					v1[k].first = v1[k].first - temp;
					temp=0;
				}
				else
				{
					ans = ans+ (v1[k].first*(abso(v2[i].second  - v1[k].second)));
					temp=temp-v1[k].first;
					k++;
				}
			}
		}
		cout << ans << endl;
	}
}