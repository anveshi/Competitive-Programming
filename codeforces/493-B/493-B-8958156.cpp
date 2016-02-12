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
	lol n,i,j,a,s1=0,s2=0,sz1,sz2,sz,f;
	vector <int> v1,v2;
	v2.clear();v1.clear();
	cin >>  n;
	for(i=0;i<n;i++)
	{
	
		cin >> a;
		if(i==n-1){if(a>0)f=1;else f=2;}
		if(a>0){v1.pb(a);s1+=a;}
		else {v2.pb(-a);s2+=(-1)*a;}
	}
		if(s1>s2)
		{
			cout << "first" << endl;
		}
		else if(s2>s1)
		{
			cout <<  "second" << endl;
		}
		else if(s1==s2)
		{
			sz1=v1.size();sz2=v2.size();
			sz=min(sz1,sz2);
			for(i=0;i<sz;i++)
			{
				if(v1[i]==v2[i])continue;
				else if(v1[i]>v2[i]){cout <<  "first" << endl;return 0;}
				else {cout << "second" << endl;return 0;}
			}
			if(sz1>sz2)cout <<"first" << endl;
			else if(sz2>sz1)cout << "second" << endl;
			else if(sz1==sz2)
			{
				if(f==1)cout << "first";
				else cout << "second"  << endl;
			}
		}
	return 0;
}