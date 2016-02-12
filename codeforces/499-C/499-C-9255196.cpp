#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define pb push_back
#define mp make_pair
#define ss second
#define ff first

using namespace std;

const int MOD = 1000000007;
lol long_max=numeric_limits<lol>::max();
int main()
{
	//ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	lol x1,y1,x2,y2,i,a,b,c,n,ans,z1,z2;
	cin >> x1 >> y1 >> x2 >> y2 >> n;
	ans=0;
	for(i=0;i<n;i++)
	{
		cin >> a >> b >> c;
		z1=(a*x1+b*y1+c)<0?-1:1;
		z2=(a*x2+b*y2+c)<0?-1:1;
		if(z1*z2<0)
			ans++;
	}
	cout << ans << endl;
	return 0;
}