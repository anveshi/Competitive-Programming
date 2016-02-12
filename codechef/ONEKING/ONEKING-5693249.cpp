#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
pair <int,int> p[100005];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,i,ans,start,end;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&p[i].ff,&p[i].ss);
		}
		sort(p,p+n);
		start=p[0].ff;end=p[0].ss;
		ans=1;
		for(i=1;i<n;i++)
		{
			if(p[i].ss<end)
				end=p[i].ss;
			if(p[i].ff>end)
			{
				start=p[i].ff;
				end=p[i].ss;
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}