#include<bits/stdc++.h>
#define lol int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	lol n,x,y,i,j,ox,oy,ans,f1,f2,temp,a,b;
	cin >> n;
	map < pair<lol,lol>,lol > mp;
	vector < pair<lol,lol> >v;
	v.clear();
	mp.clear();
	for(i=0;i<n;i++)
	{
		cin >> x >> y;
		v.push_back(make_pair(x,y));
		mp[make_pair(x,y)]=1;
	}
	if(n<=2)
		cout << 4-n << endl;
	else
	{
		ans=0;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				ox=v[i].first;
				oy=v[i].second;
				a=v[j].first - ox;
				b=v[j].second - oy;
				//if(a==0 && b==0)continue;
				f1=0;f2=0;
				if(mp.find(make_pair(ox-b,oy+a))!=mp.end())f1++;
				if(mp.find(make_pair(ox+a-b,oy+a+b))!=mp.end())f1++;
				if(mp.find(make_pair(ox+b,oy-a))!=mp.end())f2++;
				if(mp.find(make_pair(ox+a+b,oy+b-a))!=mp.end())f2++;
				temp=max(f1,f2);
				if(temp>ans)ans=temp;
				if(ans==2)break;
			}
			if(ans==2)break;
		}
		cout<< 2-ans << endl;
	}
	return 0;
}